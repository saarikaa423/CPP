#include <iostream>
using namespace std;

class array
{
    int *arr;
    int size;
public:
    array();
    array(int size);
    void take_input();
    void display();
    array add(array temp);
};