#include <iostream>
using namespace std;

class Student
{
protected:
    string roll_number,name;
public:
    void set_roll_number();
    void set_name();
    void get_roll_number();
    void get_name();
};

void Student ::set_roll_number()
{
    cout<<"Enter roll number: ";
    cin>>roll_number;
    cout<<endl;
}
void Student ::set_name()
{
    cout<<"Enter name: ";
    // cin>>name;
    cin.ignore();
    getline(cin,name);
    cout<<endl;
}

void Student ::get_roll_number()
{
    cout << "   The roll number is: " << roll_number << endl;
}
void Student ::get_name()
{
    cout << "   The name is: " << name << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float chemistry;
    float physics;
    float Sanskrit;
    float Hindi;
    float Urdu;

public:
    void set_marks();
    void get_marks(void);
};

void Exam ::set_marks()
{
    cout<<"Enter the marks of the subjects: "<<endl;
    cin>>maths;
    // cin.ignore();
    cin>>chemistry;
    // cin.ignore();
    cin>>physics;
    // cin.ignore();
    cin>>Hindi;
    // cin.ignore();
    cin>>Sanskrit;
    // cin.ignore();
    cin>>Urdu;
}

void Exam ::get_marks()
{
    cout << "   The marks obtained in maths are: " << maths << endl;
    cout << "   The marks obtained in chemistry are: " << chemistry << endl;
    cout << "   The marks obtained in physics are: " << physics << endl;
    cout << "   The marks obtained in Hindi are: " << Hindi << endl;
    cout << "   The marks obtained in Sanskrit are: " << Sanskrit << endl;
    cout << "   The marks obtained in Urdu are: " << Urdu << endl;
}

class Result : public Exam
{
    // float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_name();
        get_marks();
        cout << "\n\nYour total_marks(In percentage): " << (maths + physics + chemistry + Sanskrit + Hindi + Urdu) / 6.0 << "%" << endl;
    }
};

int main()
{

    Result obj_result;
    obj_result.set_roll_number();
    obj_result.set_name();
    obj_result.set_marks();
    obj_result.display_results();
    return 0;
}