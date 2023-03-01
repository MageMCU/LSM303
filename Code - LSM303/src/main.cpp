//
// Carpenter Software
// File: main.cpp
//
// Purpose: Public Github Account - MageMCU
// Repository: LSM303 
// Date Created: 20230229
// Folder: Code-LSM303
//
// Author: Jesse Carpenter (carpentersoftware.com)
// Email:carpenterhesse@gmail.com
//
// Testing Platform:
//  * MCU:Atmega328P
//  * Editor: VSCode
//  * VSCode Extension: Microsoft C/C++ IntelliSense, debugging, and code browsing.
//  * VSCode Extension:PlatformIO
// 
// Revised Header-Comment 20230219
//
// MIT LICENSE
//

#include <Arduino.h>

#include "LSM303.h"
#include "Timer.h"

// Parallax
lsm::LSM303<float> compass;
// Timer
nmr::Timer loopTimer;

void setup() {
  Serial.begin(9600);
  while (!Serial){}
  
  Wire.begin();

  // Address of LSM303D is ???

  // timer
  loopTimer = nmr::Timer();
}

void loop() {
  // 1-second timer
  if (loopTimer.isTimer(1000))
  {
    
  }
}
