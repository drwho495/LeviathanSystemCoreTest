// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "MainTeleop.hpp"
#include <iostream>
#include <fmt/core.h>

namespace OpModes {
	/** The Robot instance is passed into the opmode via the constructor. */
	MainTeleop::~MainTeleop() {
	}

	void MainTeleop::Start() {
	}

	void MainTeleop::Periodic() {
		robot.setTeleopDrivePowers(
			gamepad1.GetAxis(wpi::Gamepad::Axis::LEFT_X),
			gamepad1.GetAxis(wpi::Gamepad::Axis::LEFT_Y),
			gamepad1.GetAxis(wpi::Gamepad::Axis::RIGHT_X)
		);

		robot.update();
	}

	void MainTeleop::End() {
	}
};