#include "Subsystem.h"

#include <rev/AbsoluteEncoder.h>
#include "first/A301.h"

namespace Base {
	class IntakeSubsystem : Subsystem {
		public:
			IntakeSubsystem();

			void update() override;

		private:
			first::a301::A301 intakeMotor1 {0};
			first::a301::A301 intakeMotor2 {1};
	};
};