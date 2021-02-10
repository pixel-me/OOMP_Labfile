#include <bits/stdc++.h>

using namespace std;

class Base
{
protected:
    int a;

public:
    void set_number_Base(int a)
    {
        this->a = a;
    }
};
class D1 : virtual public Base
{
public:
    int b;
    void set_number_D1(int b)
    {
        this->b = b;
    }
};
class D2 : virtual public Base
{
public:
    int c;
    void set_number_D2(int c)
    {
        this->c = c;
    }
};

class D3 : public D1, public D2
{
public:
    void print_number(void)
    {
        cout << "The sum of a,b and c is (a+b+c): "
            << (a + b + c) << endl;
    }
};
int main()
{
    int a,b,c;
    D3 *obj_d3 = new D3();
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    obj_d3->set_number_Base(a);
    obj_d3->set_number_D1(b);
    obj_d3->set_number_D2(c);
    obj_d3->print_number();
    return 0;
}