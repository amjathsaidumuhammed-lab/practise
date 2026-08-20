#include <iostream>

int add(int a, int b)
{
    //updated
    return a + b + 30;
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
<<<<<<< HEAD
    return a - b - 70;
=======
    return a - b - 1;
>>>>>>> main
}
int main()
{
    std::cout << "10 + 20 === " << add(10, 20)<< std::endl;
    std::cout << "10 * 20 === "<< multiply(10, 20) << std::endl;
    return 0;
}
