#include <iostream>

#include <cstring>

using namespace std;

class media
{
protected:
    char title[50];
    float price;

public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display() {}
};

class book : public media
{
public:
    int pages;
    book(char *s, float a, int p) : media(s, a)
    {
        pages = p;
    }
    void display();
};

class tape : public media
{
    float time;

public:
    tape(char *s, float a, float t) : media(s, a)
    {
        time = t;
    }
    void display();
};

void book::display()
{
    cout << "\nTitle :" << title;

    cout << "\nPages :" << pages;

    cout << "\nPrice :" << price;
}

void tape::display()
{
    cout << "\nTitle :" << title;

    cout << "\nPlay time :" << time;

    cout << "\nPrice :" << price;
}

int main()
{

    char *title = new char[30];

    float price, time;

    int pages;

    // book details

    cout << "\n enter book details\n";

    cout << "\n title : ";

    cin >> title;

    cout << "\n price : ";

    cin >> price;

    cout << "\n pages : ";

    cin >> pages;

    book book1(title, price, pages);

    cout << "\n enter tape details \n";

    cout << "Title : ";

    cin >> title;

    cout << "Price : ";

    cin >> price;

    cout << "Play time(mins) :";

    cin >> time;

    tape tape1(title, price, time);

    media *list[2];

    list[0] = &book1;

    list[1] = &tape1;

    cout << "\n MEDIA DETAILS";

    cout << "\n ………BOOK………";

    list[0]->display();

    cout << "\n …………TAPE………";

    list[1]->display();

    return 0;
}