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
int instrument;
int octave = 4;

int main(){ 
    

    songInit();

    instrument = readScale(dir,base);

    setTempo(175);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.4);

    openOutput("composition_guitar.rra",0,0);

    verse();
    //refrain();
    //verse();
    //refrain();
    //bridge();
    //verse();
    //refrain();

    closeOutput();

    return 0;

}

int intro(){
    octave = 4;

    nplay(H, instrument, C4);
    nplay(H, instrument, E4);
    nplay(H, instrument, G4);
    c(4, H, instrument, octave);
    rest(H);
    nplay(H, instrument, C4);
    nplay(H, instrument, E4);
    nplay(H, instrument, G4);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    nplay(H, instrument, F4);
    nplay(H, instrument, A4);
    c(6, H, instrument, octave);
    nplay(H, instrument, G4);
    nplay(H, instrument, B4);
    nplay(H, instrument, D4);
    c(1, H, instrument, octave);
    c(1, H, instrument, octave);
    c(6, H, instrument, octave);
    c(4, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    rest(H);

    return 0;
}

int verse(){
    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);
    //b(4, H, instrument, octave, "x--", "-x-", "x--", SX);

//      nplay(H, instrument, C4);
//    c(4, H, instrument, octave);

    b(4, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(5, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);
    //b(6, H, instrument, octave, "x--", "-x-", "x--", SX);

//    nplay(H, instrument, F4);
//    c(6, H, instrument, octave);

    b(6, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(1, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);
    //b(5, H, instrument, octave, "x--", "-x-", "x--", SX);

//    nplay(H, instrument, A4);
//    c(5, H, instrument, octave);

    b(5, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(4, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    //b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    
    //nplay(H, instrument, G4);
    //c(1, H, instrument, octave);

    return 0;
}

int refrain(){

    return 0;

}

int bridge(){

    return 0;
}


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




//and that's it. There's nothing else here. :)
