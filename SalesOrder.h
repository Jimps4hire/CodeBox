#pragma once
#include "stdafx.h"
#include <ctime>
#include <time.h>
#include <iostream>
using namespace std;

class SalesOrder
{
private:
	int orderNO;
	time_t date;
	string BCName;
	double totalPrice, subtotal, totalShip, tax;

public:
	SalesOrder(void);
	~SalesOrder(void);
};

