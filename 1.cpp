#include <iostream>
#include <cstdlib>
int main()
{
	//riješiti uporabom dvostrukog uvjetnog granjanja
	int a;
	cout>>"Upiši neki broj razlièit od 0";
	cin>>a;
	if(a<0){
		cout>>"Broj">>a>>"je manji od 0";
	}
	else{
			cout>>"Broj">>a>>"je veæi od 0";
	}
}
