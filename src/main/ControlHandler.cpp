// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "ControlHandler.hpp"

#include "OpModes/BasicAuto.hpp"
#include "OpModes/MainTeleop.hpp"

ControlHandler::ControlHandler() {
	AddOpMode<OpModes::MainTeleop>(
		wpi::RobotMode::TELEOPERATED,
		"Main Teleop",
		"",
		"Main Tele-Operated program."
	);

	AddOpMode<OpModes::BasicAuto>(
		wpi::RobotMode::AUTONOMOUS,
		"Basic Autonomous",
		""
	);

	PublishOpModes();
}

void ControlHandler::DriverStationConnected() { }

void ControlHandler::NonePeriodic() { }

#ifndef RUNNING_WPILIB_TESTS
int main() {
	return wpi::StartRobot<ControlHandler>();
}
#endif