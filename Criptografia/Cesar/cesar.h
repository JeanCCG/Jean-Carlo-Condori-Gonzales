#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cesar{
private:
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int key = 3;
    int modulo(int);
public:
    Cesar(int);
    string encode(string &);
    string decode(string &);
};