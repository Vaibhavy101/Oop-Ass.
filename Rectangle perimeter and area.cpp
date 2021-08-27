#include<iostream>
using namespace std;
int main()
{
	float l, b, area, perimeter, diagonal;
	cout<<"Enter the value of l and b \n";
	cin>>l>>b;
	
	area=l*b;
	cout<<"\n  the area of rectangle is"<<" "<<area;
	
	perimeter=2*(l+b);
	cout<<"\n the perimeter of rectangle is"<<" "<<perimeter;
	
	diagonal= l*l + b*b;
	cout<<"\n the diagonal of rectangle is"<<" "<<diagonal;
	return 0;
}
