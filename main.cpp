#include <iostream>
#include <cmath>

using namespace std;

// funksiya nusxa
float hisobla(float, float);
int main()
{
    float c;

    c = hisobla(2,4);
    cout<<"hisoblaymiz c = "<<c<<endl;

    c = hisobla(12,7);
    cout<<"hisoblaymiz c = "<<c<<endl;

    c = hisobla(5,9);
    cout<<"hisoblaymiz c = "<<c<<endl;

    return 0;
}

float hisobla(float a, float b){
    // lokal prminiy
    float natija;
    natija = sqrt(a*a + b*b);
    return natija;
}
