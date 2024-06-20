// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include "rev/CANSparkMax.h"
#include <ctre/Phoenix.h>

#include "Constants.h"

//Drivetrain object
class Drivetrain : public frc2::SubsystemBase {
 public:
  Drivetrain();

//Functions you create
  void Periodic() override;

  void ArcadeDrive(double speed, double rotation);

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  // The motor controllers
  TalonSRX m_frontLeft;
  TalonSRX m_frontRight;
  WPI_VictorSPX m_backLeft;
  WPI_VictorSPX m_backRight;

  //Create drive variable called m_drive with type "DifferentialDrive" 
  frc::DifferentialDrive m_drive{ 
  [&](double output) {m_frontLeft.Set(ControlMode::PercentOutput, output); },
  [&](double output) {m_frontRight.Set(ControlMode::PercentOutput, output); }};
};
