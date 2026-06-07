#include "IntakeSubsystem.h"

IntakeSubsystem::IntakeSubsystem() {
    intakeMotor1.SetInverted(false);
    intakeMotor2.SetInverted(true);
}

void IntakeSubsystem::update() {
};