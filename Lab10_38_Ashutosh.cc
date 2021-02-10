#include <iostream>
#include <string.h>
using namespace std;

class Document
{
public:
    char *Name;
    void PrintNameOf() {}
};

class Book : public Document
{
public:
    Book(char *name, long pagecount);
    void PrintNameOf();
    long PageCount;
};

Book::Book(char *name, long pagecount)
{
    Name = new char[strlen(name) + 1];
    strcpy(Name, (strlen(Name), name));
    PageCount = pagecount;
};

void Book::PrintNameOf()
{
    cout << "Name of book: ";
    Document::PrintNameOf();
    cout << Name;
}
int main(int argc, char const *argv[])
{
    char c1[10] = "Haloween";
    Book b1 = Book(c1, 365);
    b1.PrintNameOf();
    cout << endl
         << b1.PageCount << endl;
    return 0;
}
