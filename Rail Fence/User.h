//
// Created by JeanCarlo on 07/04/2021.
//
#pragma once
#include <string>
using namespace std;
class Usuario{
private:
    int clave=3;
public:
    Usuario(int);
    string encode(string&);
    string decode(string&);
};
