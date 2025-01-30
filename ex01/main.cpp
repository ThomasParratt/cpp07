#include "iter.hpp"

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "arr1: ";
    iter(arr1, len, print);
    iter(arr1, len, increment);
    std::cout << std::endl << "arr1: ";
    iter(arr1, len, print);
    std::cout << std::endl;

    char arr2[] = {'a', 'b', 'c', 'd', 'e'};
    len = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "arr2: ";
    iter(arr2, len, print);
    iter(arr2, len, increment);
    std::cout << std::endl << "arr2: ";
    iter(arr2, len, print);
    std::cout << std::endl;

    float arr3[] = {42.2, 89.3, 42.1, 32.9, 42.01};
    len = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "arr3: ";
    iter(arr3, len, print);
    iter(arr3, len, increment);
    std::cout << std::endl << "arr3: ";
    iter(arr3, len, print);
    std::cout << std::endl;
}