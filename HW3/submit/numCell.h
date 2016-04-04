//Kishan Patel. Partner: Wonjae Yang

#ifndef numCELL
#define numCELL

#include <stdio.h>

template<typename T> class numCell
{
private:
    T storedValue;
    
public:
    numCell(T initialValue);                  // constturctor
    T read();                                 // return the content of the cell
    void write(T value);                      // write value to cell
    numCell& swap (numCell& otherCell);       // swap the contents of this cell with another
    numCell& operator=(numCell& otherCell);   // copy constructor
    numCell& operator+(numCell& otherCell);   // return the sum of this and otherCell
};

template <typename T>
numCell<T>::numCell(T initialValue)
{
    storedValue = initialValue;
}

template <typename T>
T numCell<T>::read()
{
    return storedValue;
}

template <typename T>
void numCell<T>::write(T value)
{
    storedValue = value;
}

template <typename T>
numCell<T>& numCell<T>::swap(numCell& otherCell)
{
    T tmp = this->read();
    write(otherCell.read());
    otherCell.write(tmp);
    return *this;
}

template <typename T>
numCell<T>& numCell<T>::operator=(numCell<T>& otherCell)
{
    write(otherCell.read());
    return *this;
}

template <typename T>
numCell<T>& numCell<T>::operator+(numCell<T>& otherCell)
{
    
    numCell *result = new numCell(otherCell.read());
    result->write(this->read() + otherCell.read());
    return *result;
}

#endif /* numCell_hpp */