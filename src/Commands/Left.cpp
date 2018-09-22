/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Left.h"
#include "Robot.h"

Left::Left() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain);
}

// Called just before this Command runs the first time
void Left::Initialize() {
	SetTimeout(5);
}

// Called repeatedly when this Command is scheduled to run
void Left::Execute() {
	Robot::driveTrain->getLeftMotor()->Set(ControlMode::PercentOutput, 1);
}

// Make this return true when this Command no longer needs to run execute()
bool Left::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void Left::End() {
	Robot::driveTrain->getLeftMotor()->Set(ControlMode::PercentOutput, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Left::Interrupted() {

}
