#pragma once
#include <iostream>
#include <string>
using namespace std;
class rot13{
private:
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int key = 2 ;
    int modulo(int );
public:
    string encode(string &);
    string decode(string &);
};