#include <iostream>

int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}
int main()
{
    std::cout << "10 + 20 = " << add(10, 20)<< std::endl;
    std::cout << "10 * 20 = "<< multiply(10, 20) << std::endl;
    return 0;
}
