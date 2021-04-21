#include"breakcesar.h"
#include <string>
using namespace std;
int BreakCesar::modulo(int a){
    int r = a-26*(a/26);
    r = r+(r<0)*26;
    return r;
}
string BreakCesar::decode(string& msj) {
    string descipher[alphabet.length()][2];
    string code;
    for (int i = 1; i <= alphabet.length(); ++i) {
        code="";
        for (int j = 0; j < msj.length(); ++j) {
            code += (alphabet[modulo(alphabet.find(msj[j]) - i)]);
        }
        descipher[i-1][0]=to_string(i);
        descipher[i-1][1]=code;
        cout<<"Key: "<<i<<" , code: "<<code<<endl;
    }
}