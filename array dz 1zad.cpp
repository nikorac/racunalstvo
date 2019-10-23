#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	
	int br;
	int b=0;
	int prosjek;
	int zbroj=0;
	int A[10]={16,22,377,447,52,63,7,348,69,4410};
	for(br=0;br<10;br++)
	{
		cout<<"A["<<br<<"]="<<A[br]<<"  ";
		b++;
		zbroj+=A[br];
	}
	cout<<endl; 
	prosjek=zbroj/br;
	cout<<"prosjecna vrijednost ovih brojeva je "<<prosjek<<"  ";
	
system("PAUSE"); 
return 0;
}
