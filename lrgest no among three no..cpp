#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"Enter first number:"; 
    cin>>num1;
    cout<<"Enter second number:"; 
    cin>>num2;
    cout<<"Enter third number:";
    cin>>num3;
    
    if(num1>num2)
    {
	cout<<"First number "<<num1<<" is the largest";
    }
    else if(num2>num3)
    {
	cout<<"Second number "<<num2<<" is the largest";
    }
    else
    {
 	cout<<"third number "<<num3<<" is the largest";   	
	}
    return 0;
}




