/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Right.h"
#include "Robot.h"

Right::Right() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain);
}

// Called just before this Command runs the first time
void Right::Initialize() {
	SetTimeout(5);
}

// Called repeatedly when this Command is scheduled to run
void Right::Execute() {
	Robot::driveTrain->tankDrive(0, 1);
}

// Make this return true when this Command no longer needs to run execute()
bool Right::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void Right::End() {
	Robot::driveTrain->tankDrive(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Right::Interrupted() {

}
