#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"A qiymat kiriting: ";
    cin>>a;

    // shart bajaramiz
    if(a>0){
        cout<<"hosil bo'lgan son 1 ga oshdi: "<<++a<<endl;
    }else{
        cout<<"hosil bo'lgan son oshmadi: "<<a<<endl;
    }
    return 0;
}
