// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "MainTeleop.hpp"
#include "Base/Robot.hpp"

/** The Robot instance is passed into the opmode via the constructor. */
MainTeleop::MainTeleop(Robot& robot) : robot{robot} {}

MainTeleop::~MainTeleop() {
  /* Called when the opmode is de-selected. */
}

void MainTeleop::Start() {
  /* Called once when the robot is first enabled. */
}

void MainTeleop::Periodic() {
  /* Called periodically (set time interval) while the robot is enabled. */
}

void MainTeleop::End() {
  /* Called when the robot is disabled (after previously being enabled). */
}
