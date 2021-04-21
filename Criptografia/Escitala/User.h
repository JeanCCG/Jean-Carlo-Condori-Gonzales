#pragma once
#include <string>
using namespace std;
class Usuario{
private:
    int clave[2]={0,1};
public:
    Usuario(int,int);
    string encode(string&);
    string decode(string&);
};
