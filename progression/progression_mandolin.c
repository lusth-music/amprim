//-----------------------------------------------------------
// progression_mandolin.c
//
// Short demonstration of chosen chord progression (1465).
// Compile with make; listen with make play.
//
// Alexander M. Prim
// CS 495: Special Topics - Music
// The University of Alabama, Spring 2015
//
// This program comes with NO WARRANTY, EXPRESSED OR IMPLIED.
// Use this program at your own risk.
//-----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

//Using mandolin.
#define dir "/usr/local/share/samples/"
#define base "mandolin/sample_"

char *PROGRAM_NAME = "progression_mandolin";
char *PROGRAM_VERSION = "0.01";

int last = 0;

int main(){ 
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

//used for goto
BEGIN:
    c(1,H,instrument,octave); 
    ci4(1,Q,instrument,octave+1);
    ci4(1,W,instrument,octave+1);

    rest(I);

    b(1, Q, instrument, octave, "--x", "-x-", "x--", SX);
    c(4,H,instrument,octave-1);
    ci2(4,Q,instrument,octave);
    ci4(4,W,instrument,octave);

    rest(I);

    b(4, Q, instrument, octave-1, "--x", "-x-", "x--", SX);
    c(6,H,instrument,octave-1);
    ci2(6,Q,instrument,octave);
    ci4(6,W,instrument,octave);

    rest(I);
    rest(I);

    if (last){
        goto END;
    }
    else{
        c(5,Q,instrument,octave-1);
        ci2(5,Q,instrument,octave);
        ci4(5,Q,instrument,octave+1);

        last = 1; 
        rest(H);
        rest(H);
        rest(Q);
        goto BEGIN;
    }

//different ending notes
END:
    c(5,Q,instrument,octave-1);
    ci2(5,Q,instrument,octave);
    ci4(5,Q,instrument,octave);
    ci4(5,Q,instrument,octave);
    c(1,H,instrument,octave);
    rest(beatsToMeasures(2));
    b(1, H, instrument, octave-1, "--x", "-x-", "x--", SX);

    closeOutput();

    return 0;
}

//and that's it. There's nothing else here. :)
