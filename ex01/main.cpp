#include "iter.hpp"

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr1) / sizeof(arr1[0]);

    for (size_t i = 0; i < len; i++)
        std::cout << "arr1[i] = " << arr1[i] << std::endl;

    iter(arr1, len, plusOne);
    std::cout << "call iter()" << std::endl;
    for (size_t i = 0; i < len; i++)
        std::cout << "arr[i] = " << arr1[i] << std::endl;

    std::cout << std::endl;

    char arr2[] = {'a', 'b', 'c', 'd', 'e'};
    len = sizeof(arr2) / sizeof(arr2[0]);

    for (size_t i = 0; i < len; i++)
        std::cout << "arr[i] = " << arr2[i] << std::endl; 

    iter(arr2, len, plusOne);
    std::cout << "call iter()" << std::endl;
    for (size_t i = 0; i < len; i++)
        std::cout << "arr[i] = " << arr2[i] << std::endl; 
}