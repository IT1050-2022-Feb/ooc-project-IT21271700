#include<iostream>
#include<cstring>
using namespace std

class Payment {
private:
	string payment_type;
	string payment_ID;
	double amount;

public:
	Payment();
	Payment(string ppayment_type, string ppayment_ID, double pamount);
	void display_payment_methods();
	double calculate_amount();
	void display_amount();
	void store_payment_details();
	~Payment();
};
