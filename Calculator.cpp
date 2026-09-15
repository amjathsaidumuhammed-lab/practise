#include <iostream>

int add(int a, int b)
{
    //updated
<<<<<<< HEAD
    return a + b + 130;
=======
    return a + b + 50;
>>>>>>> origin/main
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
