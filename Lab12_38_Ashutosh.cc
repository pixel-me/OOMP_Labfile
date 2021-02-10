#include <iostream>
#include <string.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollno;
    float avg;
};

class Graduate : public Student
{
public:
    char subject[20];
    string employee;
    static int working;
    static int nonworking;
    static int totalno;
    static int topper;

    void getData()
    {
        cin.ignore();
        cout << "Working Graduate Yes / No: ";
        getline(cin, employee);
        if (employee == "Yes" || employee == "YES" || employee == "yes")
        {
            working++;
        }
        else if (employee == "No" || employee == "NO" || employee == "no")
        {
            nonworking++;
        }
        else
        {
            cout << "Invalid Choice, Please ";
            Graduate::getData();
        }
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Subject: ";
        cin >> subject;
        totalno++;
    }

    void Display()
    {
        cout << "Highest Scorer: "
             << "Name: " << name
             << "Age: " << name
             << "Subject: " << subject
             << "Average Marks: " << avg 
             << endl
             << (100 * nonworking / totalno) 
             << "\%"
             << " of graduates of this year are non-working & \n"
             << topper 
             << "\%"
             << " are first divisioners.";
    }
};

int Graduate::working = 0;
int Graduate::nonworking = 0;
int Graduate::totalno = 0;
int Graduate::topper = 0;

int main()
{

    int i, n;
    float average = 0.0f;
    cout << "Number of Students: \n";
    cin >> n;
    Graduate obj[n];

    for (i = 0; i < n; i++)
    {
        cout << "Entry for student No. " 
             << (i + 1) 
             << endl;
        obj[i].getData();
    }
    cout << "\nNumber of Working Graduate: " 
         << Graduate::working 
         << endl
         << "Number of Non-Working Graduate: " 
         << Graduate::nonworking 
         << endl;
    for (i = 0; i < n; i++)
    {
        if (obj[i].avg > average)
        {
            average = obj[i].avg;
        }
        if (obj[i].avg > 60)
        {
            Graduate::topper++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (obj[i].avg == average)
        {
            obj[i].Display();
        }
    }

    return 0;
}