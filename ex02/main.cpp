#include "Array.hpp"

int main(void)
{
    Array<int> *array = new Array<int>();

    Array<int> *array1 = new Array<int>(5);

    Array<int> *copy = new Array<int>(*array1);

    try
    {
        std::cout << array1->getElement(10) << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << copy->getElement(10) << std::endl;
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