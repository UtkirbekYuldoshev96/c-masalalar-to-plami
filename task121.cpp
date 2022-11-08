#include <iostream>

using namespace std;

int main(){
    // masala 11
    int a,b;
    cout<<"A qiymat kiriting: ";
    cin>>a;
    cout<<"B qiymat kiriting: ";
    cin>>b;

    if(a==b){
         if(a>b){
            cout<<"A="<<a<<endl;
            }else if(a<b){
                cout<<"B="<<b<<endl;
            }else{
                cout<<"A+B="<<a+b<<endl;
            }

    }else{
        cout<<"O'zaro teng emas"<<endl;
    }


}
