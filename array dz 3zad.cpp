#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	// nisam ocekivao da ce ovo radit
	int a;
	int c=0;
	int b;
	int A[8]={4,31,32,43,546,75,86,87};
	for(a=0;a<8;a++)
	{
		if(A[a]>c)
		{
			b=A[a]-c;
			c=c+b;
		}
	}
	cout<<c;
	
system("PAUSE"); 
return 0;
}
