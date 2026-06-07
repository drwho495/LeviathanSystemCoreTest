// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "wpi/opmode/PeriodicOpMode.hpp"

class BasicAuto : public wpi::PeriodicOpMode {
	public:
		~BasicAuto() override;

		void Start() override;
		void Periodic() override;
		void End() override;
};
