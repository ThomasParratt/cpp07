#pragma once
#include <iostream>

template<typename T>
class Array
{
    private:
        unsigned int    _len = 5;
        T               _arr[_len];
    public:
        Array()
        {
            
        }

        Array(unsigned int n)
        {
            _len = n;
        }

        Array(const Array& obj)
        {
            _arr = obj._arr;
        }

        ~Array() {}

        Array& operator=(const Array& obj)
        {
            if (this != &obj)
                _arr = obj._arr;
            return (*this);
        }


        unsigned int size()
        {
            return (_len);
        }

        T   getElement(unsigned int i)
        {
            return (_arr[i]);
        }
};