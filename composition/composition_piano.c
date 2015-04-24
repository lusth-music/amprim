//-----------------------------------------------------------
// composition_piano.c
//
// Piano file for final composition.
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
#define base "piano/grand_"

void intro();
void verse();
void refrain();
void bridge();

char *PROGRAM_NAME = "composition_drums";
char *PROGRAM_VERSION = "0.01";

int last = 0;
int instrument;
int octave = 3;

int main(){ 
    

    songInit();

    instrument = readScale(dir,base);

    setTempo(175);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.2);

    openOutput("composition_piano.rra",0,0);

    #include "controller"
    rest(W);

    closeOutput();

    return 0;

}

void intro(){
    setTempo(175);
    b(1, W, instrument, octave, "x--", "-x-", "x--", SX);
    b(6, W, instrument, octave, "-x-", "--x", "-x-", SX);
    b(4, W, instrument, octave, "x--", "-x-", "x--", SX);
    b(5, W, instrument, octave, "--x", "--x", "-x-", SX);

    setTempo(250);

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

    rest(W);
}

void verse(){
    setTempo(200);
    rest(W*15);
    /*b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);*/

    //return 0;
}

void refrain(){
    setTempo(250);
    rest(W*23.5);

}

void bridge(){

    setTempo(250);

    nplay(H, instrument, C3);
    nplay(H, instrument, E3);
    nplay(H, instrument, G3);
    c(4, H, instrument, octave);
    rest(H);
    nplay(H, instrument, C3);
    nplay(H, instrument, E3);
    nplay(H, instrument, G3);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    nplay(H, instrument, F3);
    nplay(H, instrument, A3);
    c(6, H, instrument, octave);
    nplay(H, instrument, G3);
    nplay(H, instrument, B3);
    nplay(H, instrument, D3);
    c(1, H, instrument, octave);
    c(4, H, instrument, octave);
    c(1, H, instrument, octave);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);

    rest(H);

    nplay(H, instrument, C3);
    nplay(H, instrument, E3);
    nplay(H, instrument, G3);
    c(4, H, instrument, octave);
    rest(H);
    nplay(H, instrument, C3);
    nplay(H, instrument, E3);
    nplay(H, instrument, G3);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    nplay(H, instrument, F3);
    nplay(H, instrument, A3);
    c(6, H, instrument, octave);
    nplay(H, instrument, G3);
    nplay(H, instrument, B3);
    nplay(H, instrument, D3);
    c(1, H, instrument, octave);
    c(1, H, instrument, octave);
    c(6, H, instrument, octave);
    c(4, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    rest(H);

    //return 0;

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