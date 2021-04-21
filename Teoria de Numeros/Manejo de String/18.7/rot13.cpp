#include"rot13.h"
#include <string>
using namespace std;
int rot13::modulo(int a){
    int r = a-26*(a/26);
    r = r+(r<0)*26;
    return r;
}
string rot13::encode(string& msj){
    string code;
    for (int i = 0; i < msj.length(); ++i) {
        if (msj[i] == ' ' ){
            code+=" ";
        }else{
            code+=(alphabet[modulo(alphabet.find(msj[i])+key)]);
        }
    }
    return code;
}
string rot13::decode(string& msj){
    string code;
    for (int i = 0; i < msj.length(); ++i) {
        if (msj[i] == ' '){
            code+=" ";
        }else{
            code+=(alphabet[modulo(alphabet.find(msj[i])-key)]);
        }
    }
    return code;
}
