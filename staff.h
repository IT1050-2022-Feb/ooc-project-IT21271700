#include<iostream>
#include<cstring>
using namespace std 

class Staff
{
private:
	string empid;
	string emp_name;
	string emp_gender;
	string emp_address;
	string emp_email;
	Registered_Customer* cus;
	Order* odr

public:
	Staff();
Staff(string pempid, string pemp_name, string pemp_gender, string pemp_address, string pemp_email);
	void display_confirm_details();
void set_report_details(string pempid, string pname, string pgender, string paddress, string pemail);
	void confirm_payments_details();
	~Staff();

};

