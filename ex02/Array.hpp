#pragma once
#include <iostream>

template<typename T>
class Array
{
    private:
        T _arr[];
    public:
        Array()
        {
        
        }
        Array(unsigned int n)
        {
            for (unsigned int i = 0; i < n; i++)
            {
                _arr[i] = int();
            }
        }
        Array(const Array& obj)
        {
            _arr = obj._arr;
        }
        ~Array() {}
        Array& operator=(const Array& obj)
        {
            if (this != &obj)
            {
                _arr = obj._arr;
            }
            return (*this);
        }
};