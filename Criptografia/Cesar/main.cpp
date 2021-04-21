#include <iostream>
#include "cesar.h"
using namespace std;

int main() {
    string msj = "aaaa";
    msj = Cesar().encode(msj);
    cout<<"a) Cifrado: "<<msj<<endl;
    msj = Cesar().decode(msj);
    cout<<"b) Descifrado: "<<msj<<endl;
}