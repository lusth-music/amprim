//-----------------------------------------------------------
// composition_guitar.c
//
// Guitar file for final composition.
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
#define base "guitar-acoustic/melo_"

char *PROGRAM_NAME = "composition_guitar";
char *PROGRAM_VERSION = "0.01";

int last = 0;

int main(){ 
    int instrument;
    int octave = 3;

    songInit();

    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.4);

    openOutput("composition_guitar.rra",0,0);

//used for goto

    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
    rest(W);
BEGIN:

    /*b(1, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(4, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(4, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(5, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(5, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);*/

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(1, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(4, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(4, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(6, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(5, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(5, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    if (last == 7) goto END;
    else{
        last++;
        goto BEGIN;
    }
END:

    closeOutput();

    return 0;
}

//and that's it. There's nothing else here. :)
