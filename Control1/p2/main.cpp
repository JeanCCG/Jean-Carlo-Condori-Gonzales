#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
    string texto="548365842358";
    //cin>>texto;
    int cont=0;
    long long int num=0;
    for (int i = texto.size()-1; i >=0; i--) {
        num+=int (texto[i]-'0')*pow(10,cont);
        cont++;
    }
    cout<<num;
}
