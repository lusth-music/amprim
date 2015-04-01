//-----------------------------------------------------------
// samples.c
//
// Short demonstration of instrument samples (4-key kiddie piano and 32-key melodica).
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
#define baseKiddie "piano/kiddie_"
#define baseMelodica "melodica/student_"

char *PROGRAM_NAME = "samples";
char *PROGRAM_VERSION = "0.01";

int last = 0;

int main(){ 
    int kiddie;
    int melodica;
    int length;
    //int octave = 3;

    songInit();

    kiddie = readScale(dir,baseKiddie);
    melodica = readScale(dir, baseMelodica);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.3);

    length = H;

    openOutput("samples.rra",0,0);
    //goto SOT;

    //Kiddie Piano
    nplay(length, kiddie, C6);
    nplay(length, kiddie, E6);
    nplay(length, kiddie, G6);
    nplay(length, kiddie, C7);

    rest(length);rest(length);

    nplay(length, melodica, F3);rest(length);
    nplay(length, melodica, Fs3);rest(length);
    nplay(length, melodica, G3);rest(length);
    nplay(length, melodica, Gs3);rest(length);
    nplay(length, melodica, A3);rest(length);
    nplay(length, melodica, As3);rest(length);
    nplay(length, melodica, B3);rest(length);
    nplay(length, melodica, C4);rest(length);
    nplay(length, melodica, Cs4);rest(length);
    nplay(length, melodica, D4);rest(length);
    nplay(length, melodica, Ds4);rest(length);
    nplay(length, melodica, E4);rest(length);
    nplay(length, melodica, F4);rest(length);
    nplay(length, melodica, Fs4);rest(length);
    nplay(length, melodica, G4);rest(length);
    nplay(length, melodica, Gs4);rest(length);
    nplay(length, melodica, A4);rest(length);
    nplay(length, melodica, As4);rest(length);
    nplay(length, melodica, B4);rest(length);
    nplay(length, melodica, C5);rest(length);
    nplay(length, melodica, Cs5);rest(length);
    nplay(length, melodica, D5);rest(length);
    nplay(length, melodica, Ds5);rest(length);
    nplay(length, melodica, E5);rest(length);
    nplay(length, melodica, F5);rest(length);
    nplay(length, melodica, Fs5);rest(length);
    nplay(length, melodica, G5);rest(length);
    nplay(length, melodica, Gs5);rest(length);
    nplay(length, melodica, A5);rest(length);
    nplay(length, melodica, As5);rest(length);
    nplay(length, melodica, B5);rest(length);
    nplay(length, melodica, C6);rest(length);

    rest(length);rest(length);

    //Song of Time
    //A d f A d f ACB g fgA d ced 
SOT:
    nplay(H,melodica, A4);
    nplay(H,melodica, D4);
    rest(H);
    nplay(H,melodica, F4);
    nplay(H,melodica, A4);
    nplay(Q,melodica, D4);
    rest(H);
    rest(Q);
    nplay(H,melodica, F4);

    nplay(Q,melodica, A4);
    nplay(Q,melodica, C5);
    nplay(H,melodica, B4);
    
    nplay(H,melodica, G4);
    
    nplay(Q,melodica, F4);
    nplay(Q,melodica, G4);
    nplay(H,melodica, A4);
    
    nplay(H,melodica, D4);
    
    nplay(Q,melodica, C4);
    nplay(Q,melodica, E4);
    nplay(H,melodica, D4);

    




    closeOutput();

    return 0;
}

//and that's it. There's nothing else here. :)
