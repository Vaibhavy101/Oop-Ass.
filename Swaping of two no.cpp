#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Enter number a : ";
    cin >> a;

    cout << "Enter number b : ";
    cin >> b;

    cout << endl << "Before swapping a = " << a << " b = " << b;

    //Swapping number
    a = a + b;
    b = a - b;
    a = a - b;

    cout << endl << "After swapping a = " << a << " b = " << b;

    return 0;
}

