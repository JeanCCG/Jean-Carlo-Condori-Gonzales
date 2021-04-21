#include <iostream>
#include "cesar.h"
using namespace std;

int main() {
    string msj = "programacion";
    Cesar Emisor(4);
    Cesar Receptor(4);
    msj = Emisor.encode(msj);
    cout<<"a) Cifrado: "<<msj<<endl;
    msj = Receptor.decode(msj);
    cout<<"b) Descifrado: "<<msj<<endl;
}