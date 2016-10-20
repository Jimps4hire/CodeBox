// Homework_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TestCase.h"
void printMainMenu();

void _tmain(int argc, _TCHAR* argv[])
{
	RobotShop shop;
	shop.deserialize();
	string command;

	printMainMenu();
	getline(cin, command);

	while(command != "exit" && command != "Exit")
	{
		if(command == "ViewSAOrder")
		{
			shop.ViewOrderPerSA();
		}
		else if(command == "ViewCatalog")
		{
			shop.ViewCatalog();
		}
		else if(command == "Customer")
		{
			shop.ViewCustomer();
		}
		else if(command == "SalesAssociate")
		{
			shop.ViewSalesAssociate();
		}
		else if(command == "NewOrder")
		{
			string salesAssoc, customer, orderNo, modelNo, quantity;

			cout << endl << "Sales Associate: ";
			getline(cin, salesAssoc);
			cout << "Enter Customer: ";
			getline(cin, customer, '\n');
			cout << "Enter Order No: ";
			getline(cin, orderNo);
			cout << "Enter Model No: ";
			getline(cin, modelNo);
			cout << "Enter Quantity: ";
			getline(cin, quantity);

			String^ strOrderNo = gcnew String(orderNo.c_str());
			SalesOrder* order = new SalesOrder(Convert::ToInt32(strOrderNo), salesAssoc, customer);
			Product* product = shop.getProduct();
			String^ strModelNo = gcnew String(modelNo.c_str());
			RobotModel* robot = product->GetRobotModel(Convert::ToInt32(strModelNo));
			if(robot != NULL)
			{
				String^ strQty = gcnew String(quantity.c_str());
				order->addItem(robot->getName(), Convert::ToInt32(strQty), robot->getPrice(), robot->getShipping());
			}

			shop.AddOrder(order);
			shop.serialize();
		}

		cout << endl << endl;
		printMainMenu();
		getline(cin, command);
	}

}
void printMainMenu()
{
	cout << "		Welcome to Robot Shop!" << endl;
	cout << "Select an operation below." << endl;
	cout << "ViewSAOrder | ViewCatalog | MainMenu | NewOrder | Exit" << endl << endl;
	cout << "Command: ";
}
void _tmain1(int argc, _TCHAR* argv[])
{
	RobotShop shop;
	TestCase* test = new TestCase();
	test->CreateCustomer(&shop);
	test->CreateSalesAssoc(&shop);
	test->CreateCategory(&shop);
	test->CreateOrder(&shop);
	shop.serialize();
}

