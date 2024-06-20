// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <units/time.h>
#include <units/voltage.h>

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

namespace OperatorConstants {
    //Port numbers for driver and operator gamepads. These correspond with the numbers on the USB tab of the DriverStation
    constexpr int kDriverControllerPort = 0;
    constexpr int kOperatorControllerPort = 1;
}  // namespace OperatorConstants

namespace DrivetrainConstants {
    //PWM ports/CAN IDs for motor controllers
    constexpr int kLeftRearID = 99;
    constexpr int kLeftFrontID = 99;
    constexpr int kRightRearID = 99;
    constexpr int kRightFrontID = 99;
    constexpr int kTestID = 99;

} 

