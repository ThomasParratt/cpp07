#include "Array.hpp"

int main(void)
{
    Array<int> *array = new Array<int>();

    Array<int> *array1 = new Array<int>(5);

    try
    {
        std::cout << array->getElement(0) << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << array1->getElement(1) << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "size of array: " << array->size() << std::endl;
    std::cout << "size of array1: " << array1->size() << std::endl;

    delete array;
    delete array1;
}