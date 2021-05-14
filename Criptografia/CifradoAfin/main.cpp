#include <iostream>
#include "Afin.h"
#include <string>
using namespace std;

int main() {
    Afin Emisor(23,14);
    cout<<Emisor.a<<" "<<Emisor.b<<endl;
    Afin Receptor(Emisor.a,Emisor.b);
    string msj="grito";
    msj= Emisor.encode(msj);
    cout<<"Cifrado: "<<msj<<endl;
    msj= Receptor.decode(msj);
    cout<<"DesCifrado: "<<msj<<endl;
    cout<<12-14<<endl;
    return 0;
}
