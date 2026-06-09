#pragma once
#include "Subsystem.h"
#include "wpi/drive/MecanumDrive.hpp"
#include "wpi/hardware/imu/OnboardIMU.hpp"

namespace Base {
    enum class DrivetrainPolicy {
        TELEOP,
        AUTONOMOUS
    };

    enum class TeleopPerspectivePolicy {
        FIELD_RELATIVE,
        DRIVER_RELATIVE
    };

    class DrivetrainSubsystem : Subsystem {
        public:
            DrivetrainSubsystem();

			void update() override;

            void setDrivetrainPolicy(DrivetrainPolicy newPolicy) {
                drivetrainPolicy = newPolicy;
            };

            DrivetrainPolicy getDrivetrainPolicy() {
                return drivetrainPolicy;
            };

            void setTeleopPerspectivePolicy(TeleopPerspectivePolicy newPolicy) {
                teleopPerspectivePolicy = newPolicy;
            };

            TeleopPerspectivePolicy getTeleopPerspectivePolicy() {
                return teleopPerspectivePolicy;
            };

            void setDrivePowers(double xPower, double yPower, double headingPower);
        private:
            wpi::OnboardIMU imu {wpi::OnboardIMU::MountOrientation::FLAT};

			first::a301::A301 driveRF {HAL_CANBusMap::HAL_CAN_BUS_D0};
			first::a301::A301 driveRR {HAL_CANBusMap::HAL_CAN_BUS_D1};
			first::a301::A301 driveLF {HAL_CANBusMap::HAL_CAN_BUS_D2};
			first::a301::A301 driveLR {HAL_CANBusMap::HAL_CAN_BUS_D3};

            wpi::MecanumDrive driveBase {
                driveLF,
                driveLR,
                driveRF,
                driveRR
            };

            DrivetrainPolicy drivetrainPolicy = DrivetrainPolicy::TELEOP;
            TeleopPerspectivePolicy teleopPerspectivePolicy = TeleopPerspectivePolicy::FIELD_RELATIVE;

            double teleopXPower = 0;
            double teleopYPower = 0;
            double teleopHeadingPower = 0;

            wpi::math::Rotation2d imuValue;
    };
};