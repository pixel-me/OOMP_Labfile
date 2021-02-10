#include <cstdio>
#define MAX_NAME 20
#define MAX_experience 30;
#define MAX_companyName 30;
using namespace std;

class  person
{
public:
	 person();
	 float code;
	 char name[MAX_NAME];
	 void input();
	 void display();
	~ person();
	
};

class account:public person
{
public:
	account();
	float pay;
	void getpay();
	void display();
	~account();
	
};
class admin:public person
{
public:
	admin();
	char experience[MAX_experience];
	void getexp();
	void display();
	~admin();
	
};
class master:public account, public admin
{
public:
	master(char message[20])
	{
		printf("%s\n",message);
	}
	char companyName[MAX_companyName];
	getcmpname
	~master();
	
};

int main(int argc, char const *argv[])
{
	master *obj new master("\n\nObject created\n");
	
	return 0;
}