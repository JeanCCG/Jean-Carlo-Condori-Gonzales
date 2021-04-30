#include"cesar.h"
#include <string>
using namespace std;
Cesar::Cesar(int clave) {
    key=clave;
}
int Cesar::modulo(int a, int n) {
    int r = a - n * (a / n);
    r = r + (r < 0) * n;
    return r;
}

string Cesar::encode(string& msj){
    string code;
    for (int i = 0; i < msj.length(); ++i) {
        code+=(alphabet[modulo(alphabet.find(msj[i])+key, alphabet.size())]);
    }
    return code;
}
string Cesar::decode(string& msj) {
    string code;
    for (int i = 0; i < msj.length(); ++i) {
        code += (alphabet[modulo(alphabet.find(msj[i]) - key, alphabet.size())]);
    }
    return code;
}