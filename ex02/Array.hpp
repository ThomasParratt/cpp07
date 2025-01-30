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
            std::cout << "Defaut contructor called" << std::endl;
            //does this initialize an empty array?
        }

        Array(unsigned int n) : _size(n)
        {
            std::cout << "Constructor called" << std::endl;
            _arr = new T[n];
        }

        Array(const Array& obj) // SHOULD COPIES BE DEEP OR SHALLOW?
        {
            std::cout << "Copy constructor called" << std::endl;
            _arr = obj._arr;
        }

        ~Array()
        {
            delete[] _arr;
        }

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