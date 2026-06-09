#pragma once
#include "Subsystem.h"
#include "wpi/hal/CANBusMap.h"

namespace Base {
	class IntakeSubsystem : Subsystem {
		public:
			IntakeSubsystem();

			void update() override;

		private:
			first::a301::A301 intakeMotor1 {HAL_CANBusMap::HAL_CAN_BUS_D4};
			// first::a301::A301 intakeMotor2 {HAL_CANBusMap::HAL_CAN_BUS_D5};
	};
};