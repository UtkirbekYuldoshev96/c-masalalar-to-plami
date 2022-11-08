#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"A qiymat kiriting: ";
    cin>>a;
    cout<<"B qiymat kiriting: ";
    cin>>b;


    if(a>b){
        cout<<"A soni katta: "<<a-b<<endl;
    }else if(a<b){
        cout<<"B soni katta: "<<b-a<<endl;
    }else{
        cout<<"Qiymat nolga teng yoki son emas"<<endl;
    }
}
