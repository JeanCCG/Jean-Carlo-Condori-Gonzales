#include <iostream>
#include "Afin.h"
#include <string>
using namespace std;

int main() {
    Afin Emisor;
    cout<<Emisor.a<<" "<<Emisor.b<<endl;
    Afin Receptor(Emisor.a,Emisor.b);
    string msj="itscool";
    msj= Emisor.encode(msj);
    cout<<"Cifrado: "<<msj<<endl;
    msj= Receptor.decode(msj);
    cout<<"DesCifrado: "<<msj<<endl;
    return 0;
}
