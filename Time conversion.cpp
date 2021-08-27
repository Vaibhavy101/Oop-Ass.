#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	float seconds, minute, hour;
	cout<<"Enter the seconds to convert \n";
	cin>>seconds;
	
	minute=seconds/60;
	hour=minute/60;
	
    cout<<seconds<<"\n seconds is equivalent to \t"<< minute<<"\t minute \n";
	cout<<seconds<<"\n seconds is equivalent to hour\t "<<hour<<"\t hour";
}
