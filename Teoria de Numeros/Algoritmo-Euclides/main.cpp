#include <iostream>
using namespace std;

int algoritmoEuclides(int a ,int b){
    if (b==1){
        return 1;
    }else if(a%b==0){
        return b;
    }else{
        return algoritmoEuclides(b,a%b);
    }
}
int main() {
    cout<<algoritmoEuclides(4864,3458);
    return 0;
}
