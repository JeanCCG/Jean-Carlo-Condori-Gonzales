#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long num = 548365842358;
    string texto ;
    string textoinv ;
    long long digit;
    while (num > 0){
        //lo ingreso desde la ultima a la primera, generando el num en string pero invertido
        digit = num % 10;
        num = num / 10;
        textoinv += char(digit + int('0'));
    }
    //invertir el texto para ponerlo en orden
    for (int i = textoinv.size() - 1; i >= 0; i--){
        texto += textoinv[i];
    }
    cout << texto << endl;
    return 0;
}