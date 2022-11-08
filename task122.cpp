#include <iostream>

using namespace std;

int main() {
    //masala 12
    int a,b,c;
    cout<<"A qiymat kiriting: ";
    cin>>a;
    cout<<"B qiymat kiriting: ";
    cin>>b;
    cout<<"C qiymat kiriting: ";
    cin>>c;

    if(a<b|| b>a){
        cout<<"Kichik son: "<<a<<endl;
    }else if(b<c>a){
        cout<<"Kichik son: "<<b<<endl;
    }else if(c<a<b){
        cout<<"Kichik son: "<<c<<endl;
    }
}
