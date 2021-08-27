#include <iostream>
using namespace std;
int main(void)
{
cout<<"For integer number from 32 till 127,\n";
cout<<"their representation for\n";
cout<<"characters is shown below\n\n";
cout<<"integer character\n";
cout<<"------- ---------\n";

for (int i = 32; i<128; i++)

cout<<i<<"\t\t"<<(char) i<<"\n";

return 0;

}
