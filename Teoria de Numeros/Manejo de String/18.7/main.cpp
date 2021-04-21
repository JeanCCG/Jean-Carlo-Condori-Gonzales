#include <iostream>
#include "rot13.h"
using namespace std;

int main() {
    string msj = "zzzz";
    msj = rot13().encode(msj);
    cout<<"a) Cifrado: "<<msj<<endl;
    msj = rot13().decode(msj);
    cout<<"b) Descifrado: "<<msj<<endl;
    cout<<"c) No seria muy dificil quebrantar el codigo con el correcto uso de un computo considerable podria probrar las 26 claves posibles y lograr descifrarlo"<<endl;
}
