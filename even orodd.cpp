#include<iostream>
using namespace std;


int main()
{
	
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    if ( num1 % 2 == 0)
        cout << num1 << " is even.\n";
    else
        cout << num1 << " is odd. \n";
    
	cout << "Enter num2: \n";
    cin >> num2;

    if ( num2 % 2 == 0)
        cout << num2 << " is even.\n";
    else
        cout << num2 << " is odd. \n";
        
    if(num1 % num2==0)
	cout<<" first no is divisible by second \n";
	else
	cout<<" num1 is not divisible be num2 \n";
	
	return 0;
	    
}

