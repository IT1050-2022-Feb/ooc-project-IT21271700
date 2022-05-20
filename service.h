//IT21272868 Wickramaarachchi W.A.N.D//
#include<iostream>
#include<cstring>
using namespace std
 
class Service
{
private:
	string servicetype;
	double servicecharge;
	float weight;
Registered_Customer* cus;
	Staff* stf;

public:
	Service();
	Service(string pservicetype, double pservicecharge, float pweight);
	void addCustomer();
	void displayservicetype();
	void displayservicecharge();
	void displayweighr();
	~Service();

};
