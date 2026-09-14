#include <iostream>

int add(int a, int b)
{
    //updated
<<<<<<< HEAD
    return a + b + 20;
=======
    return a + b + 90;
>>>>>>> 1bc8057a4d0bf188a5b655c93c9af1811c5df9ca
}
int multiply(int a, int b)
{
    return a * b * 30;
}
double divide(int a, int b)
{
    return a / b;
}
double subtract(int a, int b)
{
    return a - b - 70;
}
int main()
{
    std::cout << "10 + 20 === " << add(10, 20)<< std::endl;
    std::cout << "10 * 20 === "<< multiply(10, 20) << std::endl;
    return 0;
}
