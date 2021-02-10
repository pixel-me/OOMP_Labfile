#include <iostream>

using namespace std;

class MPEB
{
    float unit, charge;
    char name[20];

public:
    void setdata()
    {
        cout << "\nEnter the name of Consumer:";

        cin >> name;

        cout << "\nEnter unit Consumed:";

        cin >> unit;
    }

    void check()
    {
        if (unit <= 100)

            charge = ((unit)*.60);

        else if (unit > 100 && unit <= 200)
        {

            charge = 100 * .60;
            charge = charge + (unit - 100) * .80;  // For next to 100 and less than 200 //
        }
        else if (unit >= 200)
        {
            charge = 100 * .60;
            charge = charge + ((100) * .80);    // charge = charge + ((unit-100) * .80);         
            charge = charge + (unit - 200) * .92;
        }                                               // charge = (unit-200)*0.92 + (100*0.8) + (100*0.6);
        if (charge < 50)
        {
            charge = 50;
        }

        if (charge > 300)
        {

            charge = charge + (.15 * charge);
        }
    }

    void printdata()
    {

        cout << "\nConsumer name is " << name;
        printf(" and his charge is : %4.2f (INR).\n", charge);
    }
};

int main()
{
    MPEB *obj = new MPEB();
    int u;
    cout << "Enter the number of users:";
    cin >> u;
    while (u--)
    {
        obj->setdata();
        obj->check();
        obj->printdata();
    }
    return 0;
}