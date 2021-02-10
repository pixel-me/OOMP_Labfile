#include <iostream>

using namespace std;

class employee
{
	int   emp_number;
	string  emp_name;
	

	public:

		void get_emp_details();
		void show_emp_details();
};

void employee :: get_emp_details()
{
	cout<<"\nEnter employee number: ";
	cin>>emp_number;
	cout<<"\nEnter employee name: ";
	cin.ignore();
	getline(cin, emp_name);
	
}


void employee :: show_emp_details()
{
	cout<<"\n\n**** Details of  Employee ****";
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nEmployee number    :  "<<emp_number;
	
	cout<<"\n-------------------------------\n\n";
}


int main()
{
    employee emp;
    
    emp.get_emp_details();
    emp.show_emp_details();

    return 0;
}
