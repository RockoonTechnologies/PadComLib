/*This file is what the .cpp file looks for when it runs*/

#ifndef PadComLib_h
#define PadComLib_h

#include "Arduino.h"

void padStatus(String pstatus);
void maincom(String custommsg, bool launchperm);
void initialize(bool start);

#endif