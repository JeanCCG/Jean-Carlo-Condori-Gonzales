#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cesar{
private:
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz1234567890-.";
    int key = 23;
    int modulo(int,int);
public:
    Cesar(int);
    string encode(string &);
    string decode(string &);
};