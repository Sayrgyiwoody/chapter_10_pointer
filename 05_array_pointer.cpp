#include <iostream>
using namespace std;

const int MAX = 5;
void centimize(double*);

int main() {
    double varray[MAX] = {10.0,43.1,95.9,59.7,87.3};
    cout << "\nBefore Conversion :" ;
    cout << "\nInches are :" <<endl;
    for (int j=0;j<MAX;j++) {
        cout << varray[j] << ",";
    }

    centimize(varray);
    cout << "\nAfter Conversion : " ;
    cout << "\nCentimeter are : " << endl;
    for (int j=0;j<MAX;j++) {
        cout << varray[j] << ",";
    }

    return 0;
}

void centimize(double* ptrd) {
    for (int j=0;j<MAX;j++) {
        *ptrd *= 2.54;

        ptrd++;
    }
}