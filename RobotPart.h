#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class RobotPart
{
private:
	string name, description, type;
	int partNO;
	double weight, cost;

protected:
	int quantity;

public:
	RobotPart(void);
	~RobotPart(void);
	static RobotPart* createPart(string name);
	virtual void addQuantity(int quantity);
};

