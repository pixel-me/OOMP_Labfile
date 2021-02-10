#include <iostream>
using namespace std;

class DATE
{
    int dd, mm, yy;

public:
    DATE()  // Reseting Data...
    {
        dd = 0;
        mm = 0;
        yy = 0;
    }
    DATE(int dd, int mm, int yy)
    {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    bool operator>=(const DATE &d)
    {
        if (this->dd >= d.dd)
        {
            return true;
        }
        return false;
    }
    int operator-(const DATE &b)
    {
        return (this->dd - b.dd);
    }
    DATE operator+(const int &b)
    {
        return DATE(this->dd + b, this->mm, this->yy);
    }

    friend ostream &operator<<(ostream &output, const DATE &D)
    {
        output << D.dd
               << "/"
               << D.mm
               << "/"
               << D.mm
               << endl;
        return output;
    }

    friend istream &operator>>(istream &input, DATE &D)
    {
        input >> D.dd >> D.mm >> D.yy;
        return input;
    }
};

int main(int argc, char const **argv)
{
    DATE d1 = DATE(2, 3, 10);
    DATE d2 = DATE(1, 2, 11);
    int no_of_days;
    // int no_of_days = d1–d2; // This line will give an error, I don't know why...
    if (d1 >= d2)
    {
        no_of_days = d1 - d2; // overloading the – operator.
        cout << no_of_days
             << endl;
    }
    else
    {
        cout << "Exception : d1 < d2."<<endl;
    }
    
    d2 = d1 + no_of_days; // overloading the + operator.
    cout << d2; // << overloading stream extraction operator.
    return 0;
}