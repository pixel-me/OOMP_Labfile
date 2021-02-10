#include <iostream>

int absolute(int val)
{
    return((val<0)? (-val):val);
}

int main()
{
    int check = 0, x = 0;
    std::cout << "Enter the number : ";
    std::cin >> x;
    if (x<0)
    {
        x = absolute(x);
    }
    try
    {
        if (x < 2)
        {
            throw x;
        }
    }
    catch (int x)
    {
        std::cout << "Exeption: Not prime." << std::endl;
        exit(1);
    }
    try
    {
        for (long int i = 2; i*i <= x; i++)
        {
            if (x % i == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 1)
        {
            throw x;
        }
        else
        {
            std::cout << "Its Prime" << std::endl;
        }
    }
    catch (int x)
    {
        std::cout << "Exeption: "<<x<<" is Not prime." << std::endl;
    }
    return 0;
}