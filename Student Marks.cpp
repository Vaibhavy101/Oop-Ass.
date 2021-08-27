#include<iostream>
using namespace std;

int main()
{
	int english, chemistry, computers, physics, maths; 
    float total, average, percentage;

    cout <<"Enter the marks of five subjects"<<"\n";
    cin >> english >> chemistry >> computers >> physics >> maths;

    total = english + chemistry + computers + physics + maths;
    average = total / 5;
    percentage = (total / (500)) * 100;

    cout << "\n Total Marks      = " << total;
    cout << "\n Average Marks    = " << average;
    cout << "\n Marks Percentage = " << percentage;
    
    if(percentage >= 75)  
	  {
    	cout << "\n Honor";
	}
	else if(percentage >=60)   
	 {
    	cout << "\n First division";
	}
	else if(percentage >= 45)    
	{
    	cout << "\n Second division";
	}
	else 
    
	{
    	cout << "\n Third division";
    	
	}
		
 	return 0;
}

