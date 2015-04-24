#Place the names of all your tracks here (as RRA filenames)

RRA = composition_guitar.rra composition_mandolin.rra 
SRRA = s-composition_guitar.rra s-composition_mandolin.rra
INCLUDE=/usr/local/include/songlib/
LIB=/usr/local/lib/

all : $(RRA)

%.rra	: %.x
		./$<

%.x	: %.c
		gcc -Wall -g -o $@ -I$(INCLUDE) $< -L$(LIB) -lsong -lm 

mix.rra		: $(RRA)
		rrafastmixer $(RRA) > mix.rra

play	: $(RRA)
		rplay $(RRA)

playmix : mix.rra
		rplay mix.rra

s-composition_mandolin.rra : composition_mandolin.rra
		rrastereo -r composition_mandolin.rra s-composition_mandolin.rra

s-composition_guitar.rra : composition_guitar.rra
		rrastereo -r composition_guitar.rra s-composition_guitar.rra

s-composition_vocals.rra : composition_vocals.wav
		wav2rra composition_vocals.wav s-composition_vocals.rra

master:  $(SRRA)
	rrafastmixer $(SRRA) | rramaster > master.rra

master.rra :  $(SRRA)
	rrafastmixer $(SRRA) | rramaster > master.rra

master.mp3 : master.rra
	rra2mp3 master.rra

rraidentity : rraidentity.c
		gcc -Wall -g -o rraidentity rraidentity.c -lsong -lm 

.PHONY : clean

clean :
		rm -f $(RRA) $(SRRA) master.rra mix.rra master.mp3
