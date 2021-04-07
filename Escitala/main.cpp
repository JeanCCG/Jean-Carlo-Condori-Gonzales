#include <iostream>
#include <string>
#include "User.h"
using namespace std;

int main() {
    int filas=11, col=7;
    Usuario A(filas,col);
    Usuario B(filas,col);
    string mensaje = "and so discovers the continuity of the message. And the parchment";
    mensaje = A.encode(mensaje);
    cout<<"Mensaje Cifrado: "<<mensaje<<endl;
    mensaje = B.decode(mensaje);
    cout<<"Mensaje Decifrado: "<<mensaje<<endl;
    return 0;
}