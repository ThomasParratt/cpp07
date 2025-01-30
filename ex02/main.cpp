#include "Array.hpp"

int main(void)
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
    arr2[1] = 42;
    std::cout << "arr2: " << arr2 << std::endl;
    std::cout << "arr1: " << arr1 << std::endl;

    //Assignment operator
    arr = arr1;
    std::cout << "arr: " << arr << std::endl;
    arr[0] = 42;
    std::cout << "arr: " << arr << std::endl;
    std::cout << "arr1: " << arr1 << std::endl;

    try
    {
        arr[arr.size()] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        arr[arr.size() - 1] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "arr: " << arr << std::endl;
}