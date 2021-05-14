#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cesar{
private:
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int key ;
    int modulo(int,int);
public:
    Cesar(int);
    string encode(string &);
    string decode(string &);
};