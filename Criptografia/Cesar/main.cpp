#include <iostream>
#include "cesar.h"
using namespace std;

int main() {
    string msj = "computacion";
    Cesar Emisor(21);
    msj = Emisor.encode(msj);
    cout<<"Cifrado: "<<msj<<endl;
    Cesar Receptor(21);
    msj = Receptor.decode(msj);
    cout<<"Descifrado: "<<msj<<endl;
}