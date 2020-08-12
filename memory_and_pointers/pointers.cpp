#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int number = 7;

    int *pointer = &number;

    cout << "Number: " << number << endl;
    cout << "Number address: " << &number << endl;

    cout << "Pointer: " << pointer << endl;
    cout << "Pointer address: " << &pointer << endl;

    *pointer = 1;

    cout << "Number: " << number << endl;
    cout << "Pointer: " << number << endl;

    return 0;
}