#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define base "mandolin/sample_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "progression";
char *PROGRAM_VERSION = "0.01";

int last=0;

int
main()
    {
    int instrument;
    int octave = 2;

    songInit();

    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.3);

    openOutput("progression_mandolin.rra",0,0);

BEGIN:
    c(1,H,instrument,octave); 
    ci4(1,Q,instrument,octave+1);
    ci4(1,W,instrument,octave+1);


    rest(I);

    ci4(1,Q,instrument,octave+1);
    c(4,H,instrument,octave-1);
    ci2(4,Q,instrument,octave);
    ci4(4,W,instrument,octave);

    rest(I);

    ci2(4,Q,instrument,octave-1);
    c(6,H,instrument,octave-1);
    ci2(6,Q,instrument,octave);
    ci4(6,W,instrument,octave);

    rest(I);
    rest(I);

    if (last){goto END;}

    c(5,Q,instrument,octave-1);
    ci2(5,Q,instrument,octave);
    ci4(5,Q,instrument,octave+1);

    if (!last){
        last = 1; 
        rest(H);
        rest(H);
        rest(Q);
        goto BEGIN;
    }

END:
    c(5,Q,instrument,octave-1);
    ci2(5,Q,instrument,octave);
    ci4(5,Q,instrument,octave);
    ci4(5,Q,instrument,octave);
    c(1,H,instrument,octave);


    closeOutput();

    return 0;
    }
