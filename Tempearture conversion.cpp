#include<iostream>
using namespace std;
int main()
{
	float celsius, fahren;
	cout<<"\n Enter the temperature in celsius";
	cin>>celsius;
	
	fahren=(9.0/5.0)*celsius + 32;
	
	cout<<celsius<<"\n centigrade is equal to"<< " "<<fahren<<" "<<"fahrenheit";
	return 0;
}
