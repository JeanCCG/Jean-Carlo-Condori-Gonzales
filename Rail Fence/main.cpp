#include <iostream>
#include "User.h"
using namespace std;
int main() {
    Usuario A(4),B(4);
    string msj="this is a secret message";
    cout<<"\nEncode: \n";
    msj=A.encode(msj);
    cout<<msj;
    cout<<"\nDecode: \n";
    msj=B.decode(msj);
    cout<<msj;

}
