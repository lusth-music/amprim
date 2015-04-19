//-----------------------------------------------------------
// composition_mandolin.c
//
// Mandolin/other file for final composition.
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

char *PROGRAM_NAME = "composition_mandolin";
char *PROGRAM_VERSION = "0.01";

int last = 0;
int instrument;
int octave = 2;

int main(){ 
    

    songInit();

    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.1);

    openOutput("composition_mandolin.rra",0,0);

    intro();
    intro();
    intro();
    verse();
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
	rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);
    rest(H);

    return 0;
}

int verse(){
	b(1, H, instrument, octave-1, "x--", "-x-", "x--", SX);
    b(1, H, instrument, octave-1, "-x-", "--x", "-x-", SX);
    b(1, H, instrument, octave-1, "--x", "-x-", "--x", SX);
    b(1, H, instrument, octave-1, "-x-", "--x", "-x-", SX);

    c(1, H, instrument, octave+1);
    c(4, H, instrument, octave+1);

    b(4, H, instrument, octave-1, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave-1, "-x-", "--x", "-x-", SX);
    b(4, H, instrument, octave-1, "--x", "-x-", "--x", SX);
    b(4, H, instrument, octave-1, "-x-", "--x", "-x-", SX);

    c(4, H, instrument, octave+1);
    c(6, H, instrument, octave+1);

    b(6, H, instrument, octave-1, "x--", "-x-", "x--", SX);
    b(6, H, instrument, octave-1, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave-1, "--x", "-x-", "--x", SX);
    b(6, H, instrument, octave-1, "-x-", "--x", "-x-", SX);

    c(6, H, instrument, octave+1);
    c(5, H, instrument, octave+1);

    b(5, H, instrument, octave-1, "x--", "-x-", "x--", SX);
    b(5, H, instrument, octave-1, "-x-", "--x", "-x-", SX);
    b(5, H, instrument, octave-1, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave-1, "-x-", "--x", "-x-", SX);

    c(5, H, instrument, octave+1);
    c(1, H, instrument, octave+1);

    return 0;
}

int refrain(){

	nplay(H, instrument, C4);
    nplay(H, instrument, E4);
    nplay(H, instrument, G4);

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
