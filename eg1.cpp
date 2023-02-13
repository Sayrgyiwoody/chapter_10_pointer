#include <iostream>
using namespace std;

int main() {
    int var1,var2;
    int* ptr;
    var1 = 11;
    var2 = 22;
    ptr = &var1;
    cout << "var1 : " << *ptr << endl;
    ptr = &var2;
    cout << "var2 : " << *ptr << endl;
    return 0;
}