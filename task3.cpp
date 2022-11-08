#include <iostream>

using namespace std;

int main()
{

  // S=a*b == P=2+(a+b)
    int a,b, S,P;

    cout<< "A son: ";
    cin>> a;
    cout<< "B son: ";
    cin>> b;

    S=a*b;
    P=2*(a+b);

    cout<<"Yuzasi "<< S;
    cout<<"\nPremetri: "<< P;
    cout<<"\nYuza va Premetr yig'indisi: "<< S+P;

    return 0;
}
