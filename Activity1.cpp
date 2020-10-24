#include<iostream>
using namespace std;

int main() {
    int num, i, r;
    cout<<"Enter an integer: ";
    cin>> num;
    cout<<"Enter the range: ";
    cin>> r;
    for (i = 1; i <= r; ++i) {
       cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}

