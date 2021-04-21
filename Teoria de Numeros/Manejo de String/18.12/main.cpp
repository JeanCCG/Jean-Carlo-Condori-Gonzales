#include <iostream>
#include <string>
using namespace std;

void ahorcado(int n=0){
    string doll[8]={" \n\n\n\n"," O\n\n\n\n"," O\n |\n\n\n",
                    " O\n/|\n\n\n"," O\n/|\\ \n\n\n"," O\n/|\\ \n |\n \n",
                    " O\n/|\\ \n |\n/ \n"," O\n/|\\ \n |\n/ \\ "};
    string texto[23]={"buscador","cerebro", "semestre", "periodo", "codigo", "hombre", "cmoida", "ahorcado", "torneo", "adulto",
              "anciano", "estacion", "comunidad", "jugador", "rodilla", "otaku", "cabeza", "estofado", "anticuado",
              "tridente" , "humanidad", "humano", "persona"};
    string palabra=texto[n];
    string adivinar;
    int game=0;
    adivinar.resize(palabra.size(),'X');
    while(true){
        cout<<doll[game]<<endl;
        if(game==7) {
            cout<<"Perdiste :)"<<endl;
            break;
        }
        string letra;
        cout<<"Adivine la palabra:\t"<<adivinar<<endl;
        cout<<"Ingrese una letra:"; cin>>letra;
        int posicion=palabra.find(letra);
        if(posicion==string::npos){
            game+=1;
            continue;
        }else {
            while (posicion != string::npos) {
                adivinar.replace(posicion, 1, letra);
                posicion = palabra.find(letra, posicion + 1);
            }
        }
        if(adivinar.find('X')==string::npos){
            string opcion;
            cout<<adivinar<<"\nFelicidades!!! Adivino mi palabra. Desea jugar otra vez? si/no"<<endl;cin>>opcion;
            if (opcion=="si"){
                ahorcado(n+1);
            }
            break;
        }
    }
}
int main() {
    ahorcado();
    return 0;
}
