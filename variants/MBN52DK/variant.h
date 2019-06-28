/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_MBN52_DK_
#define _VARIANT_MBN52_DK_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (26u)
#define NUM_DIGITAL_PINS     (13u)
#define NUM_ANALOG_INPUTS    (5u)
#define NUM_ANALOG_OUTPUTS   (0u)


#define P0_02               (21)
#define P0_03               (14)
#define P0_04               (15)
#define P0_05               (20)
// #define P0_06               (21) // Not exposed on the DK
// #define P0_07               (14) // Not controllable
// #define P0_08               (21) // Not controllable
// #define P0_09               (14) // Not controllable
// #define P0_10               (21) // Not controllable
// #define P0_11               (14) // Not controllable
// #define P0_12               (21) // Not controllable
#define P0_13               (2)
#define P0_14               (3)
#define P0_15               (4)
#define P0_16               (5)
#define P0_17               (6)
#define P0_18               (7)
#define P0_29               (17)
#define P0_30               (9)

#define VCTS                (20)
#define RFSWO               (7)


#define ADC_RESOLUTION    12


#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif

/*


#include <Arduino.h>
#include <string.h>

int sensorPin = 3;  // P0.014
int targetPin;
int limit = 60;

void setup() {
    Serial.begin(9600);
    for (int i = 0; i < limit; i++) pinMode(i, OUTPUT);
    pinMode(sensorPin, INPUT);
}

int test(int testPin) {
    if (testPin == sensorPin) return 0;
    int sensorRead = 0;

    digitalWrite(testPin, HIGH);
    delay(1);
    sensorRead = digitalRead(sensorPin);
    if (sensorRead == LOW) {
        return 0;
    }

    digitalWrite(testPin, LOW);
    delay(1);
    sensorRead = digitalRead(sensorPin);
    if (sensorRead == HIGH) {
        return 0;
    }

    digitalWrite(testPin, HIGH);
    delay(1);
    sensorRead = digitalRead(sensorPin);
    if (sensorRead == LOW) {
        return 0;
    }

    digitalWrite(testPin, LOW);
    delay(1);
    sensorRead = digitalRead(sensorPin);
    if (sensorRead == HIGH) {
        return 0;
    }

    return 10;
}

void loop() {

    for(int i = 0; i < limit; i++) {
        if(test(i) == 10) {
            Serial.print("This pin is: ");
            Serial.println(i);
            delay(5000);
        }
    }
    Serial.print("x");
}







 */