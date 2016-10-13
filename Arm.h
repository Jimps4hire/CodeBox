#pragma once
#include "RobotPart.h"

class Arm : public RobotPart
{
public:
	Arm(void);
	~Arm(void);
	int powerConsumed(int speed);
	bool addQuantity(int quantity);
};

