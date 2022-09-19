#include "array.h"

array::array(int size)
{
    arr = new int[size];
    this->size = size;

}

array::array()
{
    size = 5;
    arr = new int[size]; 
}

void array::take_input()
{
    for (int i=0; i<=5 ; i++)
    {
        cout << "Enter the value at " << i <<"'th position :  ";
        cin >> arr[i];
    }
} 

void array::display()
{
    for( int i=0; i<=5; i++)
    {
        cout << arr[i] << " ";
    }
}

array array::add(array temp)
{
    array res(this->size);

    for(int i=0; i<=temp.size; i++)
    {
        res.arr[i] = this->arr[i] + temp.arr[i];
    }

    return res;
}
