#pragma once
#include "Subsystems/IntakeSubsystem.h"
#include "Subsystems/DrivetrainSubsystem.h"
#include "wpi/driverstation/Gamepad.hpp"

namespace Base {
    class RobotManager {
        public:
            RobotManager();

            void update();
            void setTeleopDrivePowers(double xPower, double yPower, double headingPower);

        private:
            IntakeSubsystem intake;
            DrivetrainSubsystem drivetrain;
    };
};