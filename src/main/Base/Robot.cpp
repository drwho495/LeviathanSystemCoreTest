// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.hpp"

#include "OpModes/BasicAuto.hpp"
#include "OpModes/MainTeleop.hpp"

Robot::Robot() {
  // Add opmodes to the robot here.
  AddOpMode<MainTeleop>(
    wpi::RobotMode::TELEOPERATED,
    "Main Teleop",
    "",
    "Main Tele-operated program."
  );

  AddOpMode<MyAuto>(wpi::RobotMode::AUTONOMOUS, "Test Autonomous", "");
  PublishOpModes();
}

/** This function is called exactly once when the DS first connects. */
void Robot::DriverStationConnected() {}

/**
 * This function is called periodically anytime when no opmode is selected,
 * including when the Driver Station is disconnected.
 */
void Robot::NonePeriodic() {}

#ifndef RUNNING_WPILIB_TESTS
int main() {
  return wpi::StartRobot<Robot>();
}
#endif
