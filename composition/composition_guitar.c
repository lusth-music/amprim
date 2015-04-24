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

void intro();
void verse();
void refrain();
void bridge();


char *PROGRAM_NAME = "composition_guitar";
char *PROGRAM_VERSION = "0.01";

int last = 0;
int instrument;
int octave = 4;

int introTempo, verseTempo, refrainTempo;

int main(){ 
    

    songInit();

    instrument = readScale(dir,base);

    setTempo(175);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.4);

    openOutput("composition_guitar.rra",0,0);

    #include "controller"

    closeOutput();

    return 0;

}

void intro(){
    setTempo(introTempo);
    b(1, W, instrument, octave, "x--", "-x-", "x--", SX);
    b(6, W, instrument, octave, "-x-", "--x", "-x-", SX);
    b(4, W, instrument, octave, "x--", "-x-", "x--", SX);
    b(5, W, instrument, octave, "--x", "--x", "-x-", SX);

    setTempo(refrainTempo);

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
    c(4, H, instrument, octave);
    c(1, H, instrument, octave);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);

    rest(W);
}

void verse(){
    setTempo(verseTempo);
    b(1, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(4, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(5, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(6, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);
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

    b(4, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(4, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(5, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(6, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(6, H, instrument, octave, "-x-", "--x", "-x-", SX);
    b(1, H, instrument, octave, "--x", "-x-", "--x", SX);
    b(1, H, instrument, octave, "-x-", "--x", "-x-", SX);

    b(5, H, instrument, octave, "x--", "-x-", "x--", SX);
    b(5, H, instrument, octave, "-x-", "--x", "-x-", SX);
}

void refrain(){

    setTempo(refrainTempo);

    nplay(H, instrument, C4);
    rest(H);rest(H);

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
    c(4, H, instrument, octave);
    //c(1, H, instrument, octave);
    c(6, H, instrument, octave);
    c(5, H, instrument, octave);

    rest(W);

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
    //c(1, H, instrument, octave);
    c(6, H, instrument, octave);
    c(4, H, instrument, octave);
    c(5, H, instrument, octave);
    rest(H);
    rest(H);


}

void bridge(){
    setTempo(refrainTempo);
    rest(W*23);
}

//and that's it. There's nothing else here. :)
