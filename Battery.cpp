#include "StdAfx.h"
#include "Battery.h"
using namespace std;

Battery::Battery(void)
{

}


Battery::~Battery(void)
{
}


bool Battery::addQuantity(int p_quantity)
{
	quantity += p_quantity;
	return true;
}
