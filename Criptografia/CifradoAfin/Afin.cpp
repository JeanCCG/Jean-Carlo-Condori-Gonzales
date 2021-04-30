#include "Afin.h"
#include <string>
#include <time.h>
using namespace std;

Afin::Afin() {
    srand(time(NULL));
    a=rand() % 10;
    int d=algoritmoEuclides(a,26);
    while(d!=1){
        a=rand() % 10;
        d=algoritmoEuclides(a,26);
    }
    b=rand() % 26;
}
Afin::Afin(int aa, int bb){
    a=aa;
    b=bb;
}
int Afin::algoritmoEuclides(int a ,int b){
    if (b==1){
        return 1;
    }else if(a%b==0){
        return b;
    }else{
        return algoritmoEuclides(b,a%b);
    }
}
int Afin::algoritmoEuclides_ext(int a ,int b, int x1, int x2, int y1, int y2){
    int temp;
    if(b==0){
        if(x1<0){
            x1= x2+x1;
        }
        return x1;
    }else{
        temp=x1;
        x1=x2;
        x2=temp-(a/b)*x2;
        temp=y1;
        y1=y2;
        y2=temp-(a/b)*y2;
        algoritmoEuclides_ext(b,a%b,x1,x2,y1,y2);
    }
}
int Afin::modulo(int a, int n) {
    int r = a-n*(a/n);
    r = r+(r < 0)*n;
    return r;
}

string Afin::encode(string& msj){
    string code;
    for (int i = 0; i < msj.length(); ++i) {
        code+=(alphabet[modulo(a*(alphabet.find(msj[i]))+b,alphabet.size())]);
    }
    return code;
}
string Afin::decode(string& msj) {
    string code;
    int aa=algoritmoEuclides_ext(a,26,1,0,0,1);
    for (int i = 0; i < msj.length(); ++i) {
        code+=(alphabet[modulo(aa*((alphabet.find(msj[i]))-b),alphabet.size())]);
    }
    return code;
}
