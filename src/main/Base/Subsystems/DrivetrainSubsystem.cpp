#include "DrivetrainSubsystem.h"
#include <iostream>

namespace Base {
    DrivetrainSubsystem::DrivetrainSubsystem() {
        driveRF.SetInverted(true);
        driveRR.SetInverted(false);
        driveLF.SetInverted(true);
        driveLR.SetInverted(false);
    }

    void DrivetrainSubsystem::setDrivePowers(double xPower, double yPower, double headingPower) {
        if (drivetrainPolicy == DrivetrainPolicy::TELEOP) {
            teleopXPower = xPower;
            teleopYPower = yPower;
            teleopHeadingPower = headingPower;
        }
    }

    void DrivetrainSubsystem::update() {
        imuValue = imu.GetYaw();

        if (drivetrainPolicy == DrivetrainPolicy::TELEOP) {
            if (teleopPerspectivePolicy == TeleopPerspectivePolicy::DRIVER_RELATIVE) {
                driveBase.DriveCartesian(
                    teleopXPower,
                    teleopYPower,
                    teleopHeadingPower
                );
            } else if (teleopPerspectivePolicy == TeleopPerspectivePolicy::FIELD_RELATIVE) {
                driveBase.DriveCartesian(
                    teleopXPower,
                    teleopYPower,
                    teleopHeadingPower,
                    imuValue
                );
            }
        }
    }
}