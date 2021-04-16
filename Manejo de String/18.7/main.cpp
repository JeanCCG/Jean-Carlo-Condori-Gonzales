#include <iostream>

using namespace std;

class rot13{
private:
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int key = 2 ;
    int modulo(int a){
        int r = a-26*(a/26);
        r = r+(r<0)*26;
        return r;
    }
public:
    string encode(string msj){
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
    string decode(string msj){
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
};
int main() {
    string msj = "zzzz";
    msj = rot13().encode(msj);
    cout<<"a) Cifrado: "<<msj<<endl;
    msj = rot13().decode(msj);
    cout<<"b) Descifrado: "<<msj<<endl;
    cout<<"c) No seria muy dificil quebrantar el codigo con el correcto uso de un computo considerable podria probrar las 26 claves posibles y lograr descifrarlo"<<endl;
}
