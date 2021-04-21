#include <iostream>
using namespace std;

int algoritmoEuclides_ext(int a ,int b, int *x1, int x2, int *y1, int y2){
    int temp;
    if(b==0){
        return a;
    }else{
        cout<<a<<" "<<b<<" "<<*x1<<" "<<x2<<" "<<*y1<<" "<<y2<<endl;
        temp=*x1;
        *x1=x2;
        x2=temp-(a/b)*x2;
        temp=*y1;
        *y1=y2;
        y2=temp-(a/b)*y2;
        algoritmoEuclides_ext(b,a%b,x1,x2,y1,y2);
    }
}
int main() {
    int x1=1,y1=0;
    cout<<x1<<" "<<y1<<endl;
    algoritmoEuclides_ext(161,28,&x1,0,&y1,1);
    cout<<x1<<" "<<y1;
    return 0;
}