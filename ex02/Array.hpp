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
            std::cout << "Defaut constructor called" << std::endl;
            _size = 0;
            _arr = nullptr;
        }

        Array(unsigned int n)
        {
            std::cout << "Constructor called" << std::endl;
            _size = n;
            _arr = new T[_size];
            for (unsigned int i = 0; i < n; i++)
                _arr[i] = T();
        }

        Array(const Array& obj)
        {
            std::cout << "Copy constructor called" << std::endl;
            _size = obj._size;
            _arr = new T[obj._size];
            for (unsigned int i = 0; i < obj._size; i++)
                _arr[i] = obj._arr[i];
        }

        ~Array()
        {
            delete[] _arr;
        }

        Array& operator=(const Array& obj)
        {
            std::cout << "Copy assignment operator called" << std::endl;
            if (this != &obj)
		    {
                _size = obj._size;
                if (_arr != nullptr)
                    delete[] _arr;
                _arr = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    _arr[i] = obj._arr[i];
            }
	        return (*this);
        }

        class IndexOutofBoundsException : public std::exception
        {
            public:
                const char* what() const noexcept override
                {
                    return ("Index out of bounds");
                }
        };

        T& operator[](unsigned int index) const
        {
            if (index >= _size)
                throw IndexOutofBoundsException();
            return (_arr[index]);
        }

        unsigned int size() const
        {
            return (_size);
        }
};

template<typename T>
std::ostream&   operator<<(std::ostream& os, const Array<T>& obj)
{
    for (unsigned int i = 0; i < obj.size(); i++)
        os << obj[i] << " ";
    return (os);
}