#include <iostream>
using namespace std;

void swap(int x , int y) {
    int temp;
    temp = x;
    x = y ;
    y = temp;
}

int main() {
    int a=22, b=11;
    cout << "Before swapping : " << endl;
    cout << "a = " << a << " , " << " b = " << b << endl;
    swap(a,b);
    cout << "\nAfter swapping : " << endl;
    cout << "a = " << a << " , " << "b = " << b << endl;

    return 0;
}   