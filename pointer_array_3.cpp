#include <iostream>
using namespace std;

int main() {
    int array[5] = {31,54,77,52,93};
    int* ptr;
    ptr = array;
    for (int j=0;j<5;j++) {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}