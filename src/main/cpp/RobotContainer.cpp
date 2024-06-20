// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include <frc2/command/button/Trigger.h>
#include <frc2/command/button/JoystickButton.h>

#include "commands/Autos.h"
#include "subsystems/Drivetrain.h"

RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here

//m_chooser.SetDefaultOption("Simple Auto", &ExampleAuto);

  // Configure the button bindings
  ConfigureBindings();

  m_drivetrain.SetDefaultCommand(frc2::cmd::Run(
      [this] {
        m_drivetrain.ArcadeDrive(m_driverController.GetRightX(),
                                 m_driverController.GetLeftY());
      },
      {&m_drivetrain}));

  }

  void RobotContainer::ConfigureBindings() {}

frc2::CommandPtr RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return autos::ExampleAuto(&m_drivetrain);

}
