#include "Array.hpp"

int main(void)
{
    Array<int> *array = new Array<int>();

    Array<int> *array1 = new Array<int>(5);

    std::cout << array->getElement(0) << std::endl;
    std::cout << array1->getElement(0) << std::endl;

    // int * a = new int(); 
    // std::cout << *a << std::endl;
}