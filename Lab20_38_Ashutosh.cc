#include <iostream>

using namespace std;

class Shape
{
protected:
    double volume;

public:
    virtual void find_vol() = 0;
};
class Cube : public Shape
{
protected:
    double side;

public:
    Cube();
    void find_vol();
};
class Sphere : public Shape
{
protected:
    double radius;

public:
    Sphere();
    void find_vol();
};
Cube::Cube()
{
    cout << "Enter side of the Cube :" << endl;
    cin >> side;
}
Sphere::Sphere()
{
    cout << "Enter radius of the sphere :" << endl;
    cin >> radius;
}
void Cube::find_vol()
{
    volume = side * side * side;
    cout << "Volume ofCube is : " << volume << endl;
}
void Sphere::find_vol()
{
    volume = (4 / 3) * 3.14 * radius * radius * radius;
    cout << "Volume of sphere is : " << volume;
}
void main()
{
    Shape *ptr;
    Cube cube;
    Sphere sphere;
    ptr = &cube;
    ptr->find_vol();
    ptr = &sphere;
    ptr->find_vol();
}