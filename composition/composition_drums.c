//-----------------------------------------------------------
// composition_drums.c
//
// Drum file for final composition.
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

char *PROGRAM_NAME = "composition_drums";
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
    setAmplitude(0.1);

    openOutput("composition_drums.rra",0,0);

//used for goto
BEGIN:

    //spot = getLocation();

    //drumkitStick(1,1,"xxxx",(char 

    //drumkitHHOpen(5,0.75,"x-x-x-x-x-x-x-x","-x-x",(char *) 0);setLocation(spot);
    //drumkitKick(5,0.75,"-x-x-x-x-x-x-x-","x-x-",(char *) 0);


    
    b(1, W, instrument, octave, "--x", "-x-", "--x", SX);
    b(1, W, instrument, octave, "-x-", "--x", "-x-", SX);
    b(1, W, instrument, octave, "--x", "-x-", "--x", SX);
    b(1, W, instrument, octave, "-x-", "--x", "-x-", SX);

    b(4, W, instrument, octave, "--x", "-x-", "--x", SX);
    b(4, W, instrument, octave, "-x-", "--x", "-x-", SX);
    b(4, W, instrument, octave, "--x", "-x-", "--x", SX);
    b(4, W, instrument, octave, "-x-", "--x", "-x-", SX);

    b(6, W, instrument, octave, "--x", "-x-", "--x", SX);
    b(6, W, instrument, octave, "-x-", "--x", "-x-", SX);
    b(6, W, instrument, octave, "--x", "-x-", "--x", SX);
    b(6, W, instrument, octave, "-x-", "--x", "-x-", SX);

    b(5, W, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, W, instrument, octave, "-x-", "--x", "-x-", SX);
    b(5, W, instrument, octave, "--x", "-x-", "--x", SX);
    b(5, W, instrument, octave, "-x-", "--x", "-x-", SX);
    

    if (last == 5) goto END;
    else{
        last++;
        goto BEGIN;
    }
END:

    closeOutput();

    return 0;
}

//and that's it. There's nothing else here. :)