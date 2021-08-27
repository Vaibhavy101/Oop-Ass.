#include<iostream>
using namespace std;

int main()
{
	int i,n;
	{
		cout<<"\n enter the value of n";
		cin>>n;
	}
	for(i=2;i*i<n;i++)	
	{
		if(n%i==1)
		{
			cout<<"\n no is prime";
		}
		else
		{
			cout<<"\n no is not prime";
        }  
		
	return 0;
	}
}
