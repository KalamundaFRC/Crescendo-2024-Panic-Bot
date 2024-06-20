// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Drivetrain.h"
#include "units/voltage.h"
#include <iostream>

using namespace DrivetrainConstants;

Drivetrain::Drivetrain()
    : m_frontLeft{kLeftFrontID},
      m_backLeft{kLeftRearID},
      m_frontRight{kRightFrontID},
      m_backRight{kRightRearID} {

  m_frontLeft.ConfigContinuousCurrentLimit(60, 0.1);
  m_frontRight.ConfigContinuousCurrentLimit(60, 0.1);
  m_backLeft.Follow(m_frontLeft, ctre::phoenix::motorcontrol::FollowerType::FollowerType_PercentOutput);
  m_backRight.Follow(m_frontRight, ctre::phoenix::motorcontrol::FollowerType::FollowerType_PercentOutput);
  
}

void Drivetrain::Periodic() {
  std::cout << "Voltage: " << m_frontLeft.GetMotorOutputVoltage() << std::endl;
}

void Drivetrain::ArcadeDrive(double speed, double rotation) {
  m_drive.ArcadeDrive(speed, rotation);
}