#ifndef ArcadeDriveJoysticks_H
#define ArcadeDriveJoysticks_H

#include <Commands/Command.h>

#include "../Robot.h"
#include "../RobotMap.h"

class ArcadeDriveJoysticks : public Command {
public:
	ArcadeDriveJoysticks();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ArcadeDriveJoysticks_H
