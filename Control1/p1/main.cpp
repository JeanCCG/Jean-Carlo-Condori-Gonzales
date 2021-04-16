#include <iostream>
#include <string>
#include <cstring>
using std::strtok;
using namespace std;

int main() {
    string texto="intente analizar mas profundamente los mensajes recibidos";
    //getline(cin,texto);

    for (int i = 4; i < texto.size(); i+=5) {
        texto.insert(i,"|");
    }
    cout<<texto;
    char text[texto.size()+1];
    for (int i = 0; i < texto.size()+1; ++i) {
        text[i]=texto[i];
    }
    cout<<"En tokens:"<<endl;
    string p_e;
    string p_f[texto.size()/4];
    int cont=0;
    char*tokenptr;
    tokenptr=strtok(text,"|");
    while(tokenptr != NULL){
        string a =tokenptr;
        cout<<tokenptr;
        if(a.size()!=4){
            while (a.size() !=4){
                a+='X';
                cout<<"X";
            }
        }
        p_f[cont]=a;
        cont++;
        p_e+=a;
        tokenptr = strtok(NULL,"|");
        cout<<endl;
        if (tokenptr!=NULL){
            p_e+='*';
        }
    }
    cout<<p_e<<endl;
    for (int i = 0; i <= cont; ++i) {
        cout<<p_f[i]<<" ";
    }
    return 0;
}