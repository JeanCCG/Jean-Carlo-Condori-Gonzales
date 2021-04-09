#include <iostream>
#include "User.h"
using namespace std;
int main() {
    int key=5;
    Usuario A(key),B(key);
    string msj="puto el que lo lea :v";
    cout<<"\nEncode: \n";
    msj=A.encode(msj);
    cout<<msj;
    cout<<"\nDecode: \n";
    msj="GSa aoblngretaii";
    msj=B.decode(msj);
    cout<<msj;

}
