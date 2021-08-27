#include <iostream>
using namespace std;

int main() 
{
    int y;

    cout << "Enter a year: ";
    cin >>y;

    if(y%4==0)
    {
    	cout<<"\n leap year";
	}
	else if(y%100==0)
	{
		cout<<"\n leap year";
	}
	else if(y%400==0)
	{
		cout<<"\n leap year";
	}
	else
	{
		cout<<"\n Not a leap year";
	}

    return 0;
}
