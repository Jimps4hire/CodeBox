#include "StdAfx.h"
#include "RobotPart.h"
#include "Arm.h"
#include "Battery.h"
#include "Locomotor.h"
#include "Head.h"
#include "Torso.h"

using namespace std;

RobotPart::RobotPart(void)
{
	quantity = 0;
}


RobotPart::~RobotPart(void)
{
}


RobotPart* RobotPart::createPart(string name)
{
	if(name == "Arm")
	{
		return new Arm();
	}
	else if(name == "Battery")
	{
		return new Battery();
	}
	else if(name == "Locomotor")
	{
		return new Locomotor();
	}
	else if(name == "Head")
	{
		return new Head();
	}
	else if(name == "Torso")
	{
		return new Torso();
	}
	else
	{
		return NULL;
	}
}


bool RobotPart::addQuantity(int p_quantity)
{
	quantity += p_quantity;
	return true;
}