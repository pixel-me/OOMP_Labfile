#include <iostream>

using namespace std;

void main()
{
    int x, y, result;
    cout << "\nEnter 1st number : ";
    cin >> x;

    cout << "\nEnter 2nd number : ";
    cin >> y;

    try
    {
        if (y == 0)
            throw y;
        else
        {
            result = x / y;
            cout << "\nThe result is : " << result;
        }
    }
    catch (int x)
    {
        cout << "\nCan't divide by : " << y;
    }
}
