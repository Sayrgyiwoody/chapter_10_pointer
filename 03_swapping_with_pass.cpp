#include <iostream> 
using namespace std; 

void swap(int* , int*) ;

int main() {
    int a = 22,b = 11;
    cout << "Before swapping : \n";
    cout << "a = " << a << " , b = " << b << endl;
    swap(&a,&b);
    cout << "\nAfter swapping : \n";
    cout << "a = " << a << " , b = " << b << endl;
    return 0; 
}

void swap(int* n1,int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}