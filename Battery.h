#pragma once
#include "RobotPart.h"

class Battery : public RobotPart
{
private:
	double energy;
	double maxPower;

public:
	Battery(void);
	~Battery(void);
	void addQuantity(int quantity);
};

