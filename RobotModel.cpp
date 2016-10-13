#include "StdAfx.h"
#include "RobotModel.h"


RobotModel::RobotModel(string p_name, int p_modelNO, double p_price)
	: name(p_name), modelNO(p_modelNO), price(p_price)
{

}


RobotModel::~RobotModel(void)
{
}


void RobotModel::addPart(string name, int quantity)
{
	if(name == "Arm")
	{
		if(arm == NULL)
		{
			arm = RobotPart::createPart(name);
		}
		arm->addQuantity(quantity);
	}
	else if(name == "Locomotor")
	{
		if(locomotor == NULL)
		{
			locomotor = RobotPart::createPart(name);
		}
		locomotor->addQuantity(quantity);
	}
	else if(name == "Head")
	{
		if(head == NULL)
		{
			head = RobotPart::createPart(name);
		}
		head->addQuantity(quantity);
	}
	else if(name == "Battery")
	{
		if(battery == NULL)
		{
			battery = RobotPart::createPart(name);
		}
		battery->addQuantity(quantity);
	}
	else if(name == "Torso")
	{
		if(torso == NULL)
		{
			torso = RobotPart::createPart(name);
		}
		torso->addQuantity(quantity);
	}
	
}