#include "User.h"
#include <string>
using namespace std;

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