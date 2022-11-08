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
        cout<<"A soni katta: "<<a<<endl;
        cout<<"B soni kichik: "<<b<<endl;
    }else if(b>a){
        cout<<"B soni katta: "<<b<<endl;
        cout<<"A soni kichik: "<<a<<endl;
    }else{
        cout<<"Qiymat nolga teng yoki son emas"<<endl;
    }
}
