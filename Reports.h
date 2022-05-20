#include<iostream>
#include<cstring>
using namespace std

class Reports
{
private:
	string Report_ID;
	string Report_Name;
	Order* Or;
	Payment* Pay;

public:
	Reports();
	Reports(string pReport_ID, string pReport_Name);
	void addOrder(Order* Or1);
	void addPayment(Payment* Pay1);
	void store_reports(Payment* Pay, Registered_Customer* Cus);
	void display_reports_details();
	~Reports(); 
};
