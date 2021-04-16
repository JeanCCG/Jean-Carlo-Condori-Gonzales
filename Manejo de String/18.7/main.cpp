#include <iostream>

using namespace std;

class Cesar{
private:
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    int clave = 2 ;
    int modulo(int a){
        int r = a-26*(a/26);
        r = r+(r<0)*26;
        return r;
    }
public:
    string Cifrado(string mensaje){
        string palabra;
        for (int i = 0; i < mensaje.length(); ++i) {
            if (mensaje[i] == ' ' ){
                palabra+=" ";
            }else{
                palabra+=(alfabeto[modulo(alfabeto.find(mensaje[i])+clave)]);
            }
        }
        return palabra;
    }
    string Descifrado(string mensaje){
        string palabra;
        for (int i = 0; i < mensaje.length(); ++i) {
            if (mensaje[i] == ' '){
                palabra+=" ";
            }else{
                palabra+=(alfabeto[modulo(alfabeto.find(mensaje[i])-clave)]);
            }
        }
        return palabra;
    }
};
int main() {
    string mensaje = "zzzz";
    mensaje = Cesar().Cifrado(mensaje);
    cout<<"a) Cifrado: "<<mensaje<<endl;
    mensaje = Cesar().Descifrado(mensaje);
    cout<<"b) Descifrado: "<<mensaje<<endl;
    cout<<"c) No seria muy dificil quebrantar el codigo con el correcto uso de un computo considerable podria probrar las 26 claves posibles y lograr descifrarlo"<<endl;
}
