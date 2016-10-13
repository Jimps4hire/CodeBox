#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Product
{
private:
	string name, description, category;
	double price, shipping;

public:
	Product(void);
	~Product(void);
};

