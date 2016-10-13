#include "StdAfx.h"
#include "Arm.h"
using namespace std;

Arm::Arm(void)
{
}


Arm::~Arm(void)
{
}


bool Arm::addQuantity(int p_quantity)
{
	quantity += p_quantity;
	return true;
}

