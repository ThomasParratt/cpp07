#pragma once
#include <iostream>

template<typename T>
class Array
{
    private:
        unsigned int    _size;
        T               *_arr;
    public:
        Array()
        {
            //does this initialize an empty array?
        }

        Array(unsigned int n) : _size(n)
        {
            _arr = new T[n];
        }

        ~Array()
        {
            delete[] _arr;
        }

        // Array(const Array& obj)
        // {
        //     _arr = obj._arr;
        // }

        // Array& operator=(const Array& obj)
        // {
        //     if (this != &obj)
        //         _arr = obj._arr;
        //     return (*this);
        // }

        unsigned int size() const
        {
            return (_size);
        }

        T   getElement(unsigned int index) const
        {
            if (index >= _size)
                throw IndexOutofBounds();
            return (_arr[index]);
        }

        class IndexOutofBounds : public std::exception
        {
            public:
                const char* what() const noexcept override
                {
                    return ("Index out of bounds");
                }
        };
};