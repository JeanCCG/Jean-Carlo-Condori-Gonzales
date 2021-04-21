#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre,apellido,nombreyapellido;
    cout << "Ingrese un nombre: "<< endl;
    cin>>nombre;
    cout << "Ingrese un apellido: "<< endl;
    cin>>apellido;
    nombreyapellido =nombre+' '+apellido;
    cout<<nombreyapellido<<endl;
    return 0;
}
