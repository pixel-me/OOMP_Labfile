#include <iostream>

using namespace std;

class Demo
{
public:
	int x, y;
	Demo(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	void show();
};

void Demo ::show()
{
	cout << x
		 << endl
		 << y
		 << endl;
}

int main(int argc, char const *argv[])
{
	Demo obj = Demo(10, 20);
	obj.show();
	return 0;
}