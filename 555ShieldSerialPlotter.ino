// Purpose: Goldman 555 Shield Serial Plotter Code
// Reference: https://bit.ly/336aMvu
// Author: A. Goldman
// Date: May 1, 2021
// Status: Working

#include <DDBv6AG.h>                   // Includes DDBv6AG library
#include <SoftwareSerial.h>            // Includes SoftwareSerial library
#define OUTPIN 0                       // Defines 555 Timer output pin
#define VCC 1                          // Defines VCC pin (GND from dedicated pin)
SoftwareSerial mySerial(RXPIN, TXPIN); // Sets up mySerial

void setup()
{
    mySerial.begin(38400);   // Sets serial monitor baud rate
    pinMode(OUTPIN, INPUT);  // Defines OUTPIN as input
    pinMode(VCC, OUTPUT);    // Defines VCC pin as output
    digitalWrite(VCC, HIGH); // Sets VCC pin high
}

void loop()
{
    // Sends OUTPIN data over serial...
    mySerial.println((digitalRead(OUTPIN)));
}
