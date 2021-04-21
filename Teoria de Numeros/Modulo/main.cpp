#include <iostream>
using namespace std;

void division(int a, int n){
    int r = a-n*(a/n);
    int q = a/n - (r<0);//Si r es menor a 0 devuelve 1, sino devuelve 0
    r = a-q*n;

    cout<<"Cociente: "<<q<<endl;
    cout<<"Residuo: "<<r;   
}
int main() {
    division(255,-11);
}

