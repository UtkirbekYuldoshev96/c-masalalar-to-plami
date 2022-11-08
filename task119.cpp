#include <iostream>

using namespace std;

int main()
{
    // masala 9
    int a,b;
    cout<<"A qiymat kiriting: ";
    cin>>a;
    cout<<"B qiymat kiriting: ";
    cin>>b;

    if(a<b){
        cout<<"A soni kichik: "<<a<<endl;
    }else if(b<a){
        cout<<"B soni kichik: "<<b<<endl;
    }else{
        cout<<"Qiymat nolga teng yoki son emas"<<endl;
    }
}
