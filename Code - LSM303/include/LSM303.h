//
// Carpenter Software
// File: LSM303.h
// Source: ST Microelectronics LSM303D Datasheet
// Used Device Board: 
//  (1) Pololu LSM303D3 - 3D Compass and Accelerometer (#2127)
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

#ifndef LSM_LSM303_h
#define LSM_LSM303_h

#include "Arduino.h"
#include "Wire.h"
#include "MiscMath.h"

namespace lsm
{
    template <typename real>
    class LSM303
    {
    private:
        /* data */
    public:
        LSM303(/* args */);
        ~LSM303();
    };
    
    LSM303::LSM303(/* args */)
    {
    }
    
    LSM303::~LSM303()
    {
    }
    

}

#endif