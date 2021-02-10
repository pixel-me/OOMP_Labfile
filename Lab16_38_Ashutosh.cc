#include<iostream>

using namespace std;

class demo
{
private:
    /* data */
public:
    void one(int x, int y);
    void one(char x, int y);
    void one(int x, char y);
};

void demo::one(int x, int y)
{
    cout<<x
        <<"  "
        <<y
        <<endl;
}
void demo::one(char x, int y)
{
    cout<<x
        <<"  "
        <<y
        <<endl;
}
void demo::one(int x, char y)
{
    cout<<x
        <<"  "
        <<y
        <<endl;
}

int main(int argc, char const *argv[])
{
    demo d1;
    d1.one(2, 3);
    d1.one('a', 2);
    d1.one(2, 'a');
    return 0;
}
