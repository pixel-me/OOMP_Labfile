#include <bits/stdc++.h>
#include <string>

using namespace std;

class student
{
    string address, name;
    long int mobile;
    static int id;

public:

    void getData()
    {
        cout << "Enter the name: ";
        cin.ignore();
        getline(cin, name);
        cout << endl;
        cout << "Enter the mobile: ";
        cin >> mobile;
        cout << endl;
        cout << "Enter the address: ";
        cin.ignore();
        getline(cin, address);
        cout << endl;
    }
    void displayData()
    {
        cout << endl
             << "*******************WELLCOME*********************"
             << endl
             << endl
             << "The name of this student is " << name << endl
             << endl
             << "Contact number is " << mobile << endl
             << endl
             << "Address is : " << address << endl
             << endl;
    }

    static void getenrollment()
    {
        id++;
        cout << "Unique Enrollment number is 0187cs19100" 
             << id
             << endl
             << endl
             << "***************************************************"
             << endl;
    }
};

int student::id;

int main()
{
    char name[10];  
    int n;
    printf("\nEnter the number of Students: ");
    cin >> n;
    cout << endl;
    student obj_student[n];
    for (int i = 0; i < n; i++)
    {
        cout <<"For Student number: "<<i+1<< endl<< endl;
        obj_student[i].getData();
        obj_student[i].displayData();
        student::getenrollment();
    }
    return 0;
}