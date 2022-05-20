//Created by IT21272554 - Wijekulasuriya E.G.C.S.

#include<iostream>
#include<cstring>
using namespace std;

class Registered_Customer : public Guest
{
private:
	string user_name;
	string password;
	Order* orders;
	Staff* Emp;
	Service* Sev;


public:
	Registered_Customer();
	Registered_Customer(string puser_name, string ppassword);
	void login();
	void displaydetails();
	void logout();
	~Registered_Customer();
};
