#include <iostream>
using namespace std;

class person
{
protected:
	char *name;
	int id;

public:
	void set_name(char *name)
	{
		this->name = name;
	}
	void print_name(void)
	{
		cout << "Name is: " << name << endl;
	}
	void set_id(int id)
	{
		this->id = id;
	}
	void print_id(void)
	{
		cout << "Id is is: " << id << endl;
	}
};

class student : virtual public person
{
protected:
public:
};

class faculty : virtual public person
{
protected:
public:
};

class grades : public student, public faculty
{
private:
	/*code*/
public:
	void display(void)
	{
		print_id();
		print_name();
	}
};

int main()
{
	grades obj;
	obj.set_name("dbms");
	obj.set_id(789);
	// obj.set_score(9);
	obj.display();
	return 0;
}