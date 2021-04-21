#include"cesar.h"
#include <string>
using namespace std;
Cesar::Cesar(int clave) {
    key=clave;
}
int Cesar::modulo(int a){
    int r = a-26*(a/26);
    r = r+(r<0)*26;
    return r;
}
string Cesar::encode(string& msj){
    string code;
    for (int i = 0; i < msj.length(); ++i) {
        code+=(alphabet[modulo(alphabet.find(msj[i])+key)]);
    }
    return code;
}
string Cesar::decode(string& msj) {
    string code;
    for (int i = 0; i < msj.length(); ++i) {
        code += (alphabet[modulo(alphabet.find(msj[i]) - key)]);
    }
    return code;
}