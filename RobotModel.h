#pragma once
#include "stdafx.h"
#include "RobotPart.h"
#include <string>
#include <iostream>
using namespace std;

class RobotModel
{
private:
	string name;
	int modelNO;
	double price;
	bool status;
	RobotPart *head, *locomotor, *torso, *battery, *arm;

public:
	RobotModel(string p_name, int p_modelNO, double p_price);
	~RobotModel(void);
	void addPart(string name, int quantity);

};

