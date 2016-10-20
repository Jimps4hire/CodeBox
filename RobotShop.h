#pragma once
#include "Product.h"
#include "SalesOrder.h"
#include "Customer.h"
#include "SalesAssoc.h"

class RobotShop
{
private:
	Product* product;
	list<SalesOrder*> salesOrders;
	list<Customer*> customers;
	list<SalesAssoc*> salesAssocs;

public:
	RobotShop(void);
	~RobotShop(void);

	Product* getProduct();
	void AddOrder(SalesOrder* p_order);
	void AddCustomer(Customer* p_customer);
	void AddSalesAssoc(SalesAssoc* p_assoc);

	void ViewCatalog();
	void ViewOrderPerSA();
	void ViewCustomer();
	void ViewSalesAssociate();

	void serialize();
	void deserialize();
};

