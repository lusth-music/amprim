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

void intro();
void verse();
void refrain();
void bridge();

char *PROGRAM_NAME = "composition_mandolin";
char *PROGRAM_VERSION = "0.01";

int last = 0;
int instrument;
int octave = 2;

int introTempo, verseTempo, refrainTempo;

int main(){ 
    

    songInit();

    instrument = readScale(dir,base);

    setTempo(175);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.1);

    openOutput("composition_mandolin.rra",0,0);

    #include "controller"

    closeOutput();

    return 0;

}
void intro(){
	setTempo(introTempo);
	rest(W);
    rest(W);
    rest(W);
    rest(W);

    setTempo(refrainTempo);
    /*
	nplay(H, instrument, C2);
    nplay(H, instrument, E2);
    nplay(H, instrument, G2);
    c(4, H, instrument, octave);
    rest(H);
    nplay(H, instrument, C2);
    nplay(H, instrument, E2);
    nplay(H, instrument, G2);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    nplay(H, instrument, F2);
    nplay(H, instrument, A2);
    c(6, H, instrument, octave);
    nplay(H, instrument, G2);
    nplay(H, instrument, B2);
    nplay(H, instrument, D2);
    c(1, H, instrument, octave);
	c(4, H, instrument, octave);
	c(1, H, instrument, octave);
	c(6, H, instrument, octave);
	c(5, H, instrument, octave);
	*/
	
	rest(W*12);
	//rest(W);
    //return 0;

}

void verse(){
	setTempo(verseTempo);
	b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(4, H, instrument, octave-1, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave-1, "-x-", "--x", "-x-", SX);
    b(5, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(6, H, instrument, octave-1, "x--", "-x-", "x--", SX);
    b(6, H, instrument, octave-1, "-x-", "--x", "-x-", SX);
    b(1, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(5, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(4, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(4, H, instrument, octave-1, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave-1, "-x-", "--x", "-x-", SX);
    b(5, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(6, H, instrument, octave-1, "x--", "-x-", "x--", SX);
    b(6, H, instrument, octave-1, "-x-", "--x", "-x-", SX);
    b(1, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(5, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);
    

}

void refrain(){

	setTempo(refrainTempo);
    rest(W*24.5);

}

void bridge(){

	setTempo(refrainTempo);
	//octave = 1;

	//nplay(H, instrument, C2);
    //rest(H);rest(H);

	nplay(H, instrument, C2);
    nplay(H, instrument, E2);
    nplay(H, instrument, G2);
    c(4, H, instrument, octave);
    rest(H);
    nplay(H, instrument, C2);
    nplay(H, instrument, E2);
    nplay(H, instrument, G2);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    nplay(H, instrument, F2);
    nplay(H, instrument, A2);
    c(6, H, instrument, octave);
    nplay(H, instrument, G2);
    nplay(H, instrument, B2);
    nplay(H, instrument, D2);
    c(1, H, instrument, octave);
	c(4, H, instrument, octave);
	//c(1, H, instrument, octave);
	c(6, H, instrument, octave);
	c(5, H, instrument, octave);

	rest(W);

	nplay(H, instrument, C2);
    nplay(H, instrument, E2);
    nplay(H, instrument, G2);
    c(4, H, instrument, octave);
    rest(H);
    nplay(H, instrument, C2);
    nplay(H, instrument, E2);
    nplay(H, instrument, G2);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    nplay(H, instrument, F2);
    nplay(H, instrument, A2);
    c(6, H, instrument, octave);
    nplay(H, instrument, G2);
    nplay(H, instrument, B2);
    nplay(H, instrument, D2);
    c(1, H, instrument, octave);
    //c(1, H, instrument, octave);
    c(6, H, instrument, octave);
    c(4, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    rest(H);
}


//and that's it. There's nothing else here. :)
