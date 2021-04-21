#include <iostream>
using namespace std;

int algoritmoEuclides_ext(int a ,int b, int x1, int x2, int y1, int y2){
    if(b==0){

    }else{
        algoritmoEuclides_ext(b,a%b,x,y);
    }
}
int main() {
    int d,x=0,y=1;
    algoritmoEuclides_ext(161,28,1,0,0,1);
    cout<<d<<" "<<x<<" "<<y<<endl;
    return 0;
}