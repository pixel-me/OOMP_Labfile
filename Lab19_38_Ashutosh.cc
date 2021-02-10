#include<iostream> 
using namespace std; 
  
class parent
{ 
   int x; 
public: 
    virtual void fun() = 0; 
    int getX() { return x; } 
}; 

class child: public parent
{ 
    int y; 
public: 
    void fun() { cout << "fun() called"; } 
}; 
  
int main(void) 
{ 
    child d; 
    d.fun(); 
    return 0; 
} 