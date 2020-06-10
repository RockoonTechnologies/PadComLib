/*This is where you write the code you want to run*/
#include "Arduino.h"
#include "PadComLib.h"

String incomingByte;

void maincom(String custommsg, bool launchperm) {
	incomingByte = Serial.readString();  // reads new data
	if (incomingByte.equals(custommsg) == true) {
		
		Serial.print("Custom Message Recieved");
		//customaction();
		
	    
    } 
	if (incomingByte.equals("launch") == true) {
		if (launchperm == true) {
			
			Serial.print("launching");
			//launch();
			
			
		}
	}
}



void padStatus(String pstatus) {
	if (pstatus.equals("Idle") == true) {
		Serial.print(pstatus); 
		delay(1000); 
	}
	if (pstatus.equals("Countdown") == true) {
		Serial.print(pstatus);
		delay(1000); 
	}
	if (pstatus.equals("Abort") == true) {
		Serial.print(pstatus);
		delay(1000); 
	}
}

void initialize(bool start) {
	if (start == true) {
		Serial.begin(9600);
		
	}
}