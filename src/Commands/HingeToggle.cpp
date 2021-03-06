#include "HingeToggle.h"

#include "../Robot.h"
#include "../RobotMap.h"

HingeToggle::HingeToggle() {
	Requires(Robot::pneumatics.get());
}

// Called just before this Command runs the first time
void HingeToggle::Initialize() {
	if (Robot::pneumatics->GetHingeState()){
		Robot::pneumatics->CloseHinge();
	} else {
		Robot::pneumatics->OpenHinge();
	}
}

// Called repeatedly when this Command is scheduled to run
void HingeToggle::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool HingeToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void HingeToggle::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HingeToggle::Interrupted() {

}
