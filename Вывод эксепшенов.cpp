#include <iostream>
#include <exception>
#include <stdexcept>

double divide(int, int);

int main()
{
    int x = 500;
    int y = 0;
    try
    {
        double z = divide(x, y);
        std::cout << z << std::endl;
    }
    catch (std::overflow_error err)
    {
        std::cout << "Overflow_error: " << err.what() << std::endl;
    }
    catch (std::runtime_error err)
    {
        std::cout << "Runtime_error: " << err.what() << std::endl;
    }
    catch (std::exception err)
    {
        std::cout << "Exception!!!" << std::endl;
    }
    std::cout << "The End..." << std::endl;
    return 0;
}

double divide(int a, int b)
{
    if (b == 0)
        throw std::runtime_error("Division by zero!");
    return a / b;
}