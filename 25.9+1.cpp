#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
float dijeljenje(float a, float b)
{
    float c=a/b;
    return c;
}
int main()
{
    float a;
    float b;
    float rezultat;
    cout<<"Unesite 2 broja koja želite dijeliti";
    cin>>a;
    cin>>b;
    
    rezultat=dijeljenje(a, b);
    cout<<rezultat;
    system ("PAUSE");
}
