#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "\nEnter the number : ";
    cin >> x;
    try
    {
        if (x <= 0)
        {
            if (x == 0)
            {
                cout << "\nThe number is neutral. " << endl;
            }
            else
            {

                throw x;
            }
        }
        else
        {
            cout << "\nThe number is positive. " << endl;
        }
    }
    catch (int x)
    {
        cout << "\nExeption: the number is -ve. " << endl;
    }
    return 0;
}
