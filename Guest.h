#include<iostream>
#include<cstring>
using namespace std;

class Guest
{
protected:
	string e_mail;
	string name;
	string address;
	int phone_number;

public:
	Guest();
	Guest(string pe_mail, string pname, string paddress, int pphone_number);
	void reg();
	void searchservices();
	void displayservices();
	~Guest();

};
