#include <iostream> 
using namespace std; 
  
class parent { 
public: 
    virtual void print() 
    { 
        cout << "print base class" << endl; 
    } 
  
    void show() 
    { 
        cout << "show base class" << endl; 
    } 
}; 
  
class child : public parent { 
public: 
    void print() 
    { 
        cout << "print child class" << endl; 
    } 
  
    void show() 
    { 
        cout << "show child class" << endl; 
    } 
}; 
  
int main() 
{ 
    parent* bptr; 
    child d; 
    bptr = &d; 
    bptr->print(); 
    bptr->show(); 
} 