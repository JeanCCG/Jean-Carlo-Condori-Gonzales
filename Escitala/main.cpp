#include <iostream>
#include <string>
using namespace std;

class Usuario{
private:
    int clave[2]={0,1};
public:
    Usuario(int,int);
    string encode(string&);
    string decode(string&);
};
Usuario::Usuario(int filas, int columnas) {
    clave[0]=filas;
    clave[1]=columnas;
}
string Usuario::encode(string& mensaje){
    string code;
    for (int i = 0; i < clave[1]; i++) {
        for (int j = i; j < clave[1]*clave[0]; j+=clave[1]) {
            if (j < mensaje.length()) {
                code += mensaje[j];
            } else{
                code += " ";
            }
        }
    }
    return code;
}
string Usuario::decode(string& mensaje){
    string code;
    for (int i = 0; i < clave[0]; i++) {
        for (int j = i; j < clave[1]*clave[0]; j+=clave[0]) {
            if (j < mensaje.length()) {
                code += mensaje[j];
            }
        }
    }
    return code;
}

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