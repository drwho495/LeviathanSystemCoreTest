#include "RobotManager.h"

namespace Base {
    RobotManager::RobotManager() {

    }

    void RobotManager::setTeleopDrivePowers(double xPower, double yPower, double headingPower) {
        if (drivetrain.getDrivetrainPolicy() != DrivetrainPolicy::TELEOP)
            drivetrain.setDrivetrainPolicy(DrivetrainPolicy::TELEOP);
        
        drivetrain.setDrivePowers(xPower, yPower, headingPower);
    }

    void RobotManager::update() {
        drivetrain.update();
        intake.update();
    }
}