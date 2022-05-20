#include<iostream>
#include<cstring>
using namespace std;

class Order
{
private:
	int orderno;
	string orderid;
Registered_Customer* cus;

public:
	Order();
	Order(int porderno, string porderid);
	void addOrder(Payment* Pay, Reports* Rep);
	void displayorderlist();
	~Order();
};
