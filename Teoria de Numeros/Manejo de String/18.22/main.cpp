#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto= "This is an example text";
    string::const_iterator iterador1 = texto.end();
    cout<<"texto = "<<texto<<endl;
    cout<<"Usando el iterador:";
    while(iterador1!=texto.begin()-1){
        cout<<*iterador1;
        iterador1--;
    }
    return 0;
}
