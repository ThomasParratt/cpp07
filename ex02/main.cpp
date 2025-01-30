#include "Array.hpp"

int main(void)
{
    Array<int> array;

    Array<int> array1(5);

    Array<int> copy(array1);

    Array<int> copy1;

    copy1 = array1;

    try
    {
        std::cout << array1.getElement(10) << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << copy.getElement(10) << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "size of array: " << array.size() << std::endl;
    std::cout << "size of array1: " << array1.size() << std::endl;
}