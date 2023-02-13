#include <iostream>
using namespace std;

int main() {
    int array[5];
    int* ptr;

    array[0] = 10;
    // ptr[1] = 20;
    cout << array << endl;
    cout << array[0] << endl;
    cout << &array[0] << endl;

    // ptr = &array;
    ptr = array;
    ptr[1] = 20;
    
    array[2] = 30;
    cout << array[1] << endl;
    cout << ptr[2] << endl;

    return 0;
}