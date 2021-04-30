#include <iostream>
using namespace std;

int modulo(int a, int n) {
    int r = a - n * (a / n);
    r = r + (r < 0) * n;
    return r;
}
int algoritmoEuclides_ext(int a ,int b, int x1, int x2, int y1, int y2){
    int temp;
    if(b==0){
        cout<<"x = "<<x1<<" y = "<<y1<<endl;
        if(x1<0){
            cout<<"ga"<<endl;
            x1= x2+x1;
        }
        cout<<"inversa = "<<x1<<endl;
        return x1;
    }else{
        temp=x1;
        x1=x2;
        x2=temp-(a/b)*x2;
        temp=y1;
        y1=y2;
        y2=temp-(a/b)*y2;
        cout<<a<<" "<<b<<" "<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<endl;
        algoritmoEuclides_ext(b,a%b,x1,x2,y1,y2);
    }
}
int main() {
    algoritmoEuclides_ext(5,26,1,0,0,1);
    return 0;
}