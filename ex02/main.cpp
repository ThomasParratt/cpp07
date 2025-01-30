#include "Array.hpp"

int main(void) // try with different data types
{
    //Construction with no parameter
    Array<int> arr;
    std::cout << "arr: " << arr << std::endl;

    //Construction with parameter
    Array<int> arr1(5);
    std::cout << "arr1: " << arr1 << std::endl;

    //Construction by copy
    Array<int> arr2(arr1);
    std::cout << "arr2: " << arr2 << std::endl;
    arr2[0] = 42;
    std::cout << "arr2: " << arr2 << std::endl;
    std::cout << "arr1: " << arr1 << std::endl;

    //Assignment operator
    arr = arr1;
    std::cout << "arr: " << arr << std::endl;
    arr[1] = 42; // this changes inndex zero... :/ !
    std::cout << "arr: " << arr2 << std::endl;
    std::cout << "arr1: " << arr1 << std::endl;

    // Array<int> copy(array1);

    // Array<int> copy1;

    // copy1 = array1;

    // try
    // {
    //     array1[1] = 2;
    //     std::cout << array1[1] << std::endl;
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // try
    // {
    //     std::cout << copy[1] << std::endl;
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // std::cout << "size of array1: " << array1.size() << std::endl;
}