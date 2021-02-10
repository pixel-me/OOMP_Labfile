#include <iostream>
#include <string>

using namespace std;

class person
{
public:
	int code;
	string name;
	void input();
	void display();
};

class account : virtual public person
{
public:
	float pay;
	void getpay();
	void display();
};

class admin : virtual public person
{
public:
	string experience;
	void getexp();
	void display();
};

class master : public account, public admin
{
public:
	string companyName;
	void display();
};