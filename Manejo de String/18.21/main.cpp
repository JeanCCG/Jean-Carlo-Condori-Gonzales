#include <iostream>
#include <string>
#include <cstring>
using std::strtok;
using namespace std;

int main() {
    string texto="Este ¿!?¡es.. un -enunciado- con 7 tokens";
    string signos=".,;:¿?!¡()[]_-*";
    string a;
    for (int i = 0; i < signos.size(); ++i) {
        if( texto.find(signos[i])!=string::npos ){
            int posicion = texto.find(signos[i]);
            while(posicion!=string::npos){
                texto.replace(posicion,1," ");
                posicion=texto.find(signos[i],posicion+1);
            }
        }
    }
    cout<<"Sin puntuacion: "<<endl;
    cout<<texto<<endl;

    char text[texto.size()];
    for (int i = 0; i < texto.size(); ++i) {
        text[i]=texto[i];
    }
    cout<<"En tokens:"<<endl;

    char*tokenptr;
    tokenptr=strtok(text, " ");
    while(tokenptr != NULL){
        cout<<tokenptr<<"\n";
        tokenptr = strtok(NULL, " ");
    }
    return 0;
}
