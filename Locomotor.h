#pragma once
#include "RobotPart.h"

class Locomotor : public RobotPart
{
private:
	int maxSpeed;

public:
	Locomotor(void);
	~Locomotor(void);
	int powerConsumed(int speed);
};

