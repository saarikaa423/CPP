#include "array.h"

int main()
{

    int size_array;

    cout << "Give the size of the array : ";
    cin >> size_array;

    array a1(size_array);
    array a2(size_array);
    array res(size_array);

    a1.take_input();
    cout<<"A1 input over"<<endl;

    a2.take_input();
    cout<<"A1 input over"<<endl;

    res = a1.add(a2);

    res.display();

    return 0;

}