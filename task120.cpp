#include <iostream>

using namespace std;

int main(){
    // masala 10
    int a,b;
    cout<<"A qiymat kiriting: ";
    cin>>a;
    cout<<"B qiymat kiriting: ";
    cin>>b;

    if(a==b){
        cout<<"A+B="<<a+b<<endl;
    }else if(a==0 && b==0){
        cout<<"nol qiymat="<<a<<"="<<b<<endl;
    }else{
        cout<<"A va B son qayta kiriting!"<<endl;
    }
}
