#include "Subsystems/IntakeSubsystem.h"

namespace Base {
    class RobotManager {
        public:
            void update();
        
        private:
            IntakeSubsystem intake;
    };
};