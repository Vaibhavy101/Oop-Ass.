#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	float amt, year, rate, simple_intrest, compound_intrest, principle=10000;
	cout<<"\n Enter amount to be deposited, year and rate \n";
	cin>>amt>>year>>rate;
	
	simple_intrest= amt*year*rate/100;
	cout<<"\n The simple intrest is"<<" "<<simple_intrest;
	
	compound_intrest=principle * (pow((1 + rate / 100), year));
	cout<<"\n The compound intrest is"<<" "<<compound_intrest;
	return 0;
}
