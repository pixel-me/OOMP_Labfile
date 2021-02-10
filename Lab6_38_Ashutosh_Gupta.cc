#include <iostream>

using namespace std;

class fruit;

class basket
{
public:
    void Get_data(fruit&);
    void Display_data(fruit);
};

class fruit
{
    char ch;
    int a, b, num;
    friend class basket;
};

void basket ::Get_data(fruit &f1)
{
    int n;
    char ci, *cp;
    cin.ignore();
    cout << "Enter the num: ";
    cin>>n;
    cout << endl;
    cout << "Enter the ch: ";
    cin.ignore();
    cin>>ci;
    cout << endl;
    f1.num = n;
    f1.ch = ci;
    return;
}

void basket ::Display_data(fruit f_obj)
{
    printf("\n\nnum = %d\n", f_obj.num);
    printf("\nch = %c\n\n", f_obj.ch);
    return;
}

int main()
{
    fruit f_obj;
    basket b_obj;
    b_obj.Get_data(f_obj);
    b_obj.Display_data(f_obj);
    return 0;
}