#include <iostream>
using namespace std;
int main() {
    string cadena;
    cout<<"Ingrese una cadena de string"<<endl;
    cin>>cadena;
    cadena.insert(cadena.size()/2,"******");
    cout<<cadena;
    return 0;
}
