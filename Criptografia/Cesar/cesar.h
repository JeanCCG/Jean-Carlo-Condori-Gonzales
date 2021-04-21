#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cesar{
private:
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int key = 3;
    static int modulo(int );
public:
    string encode(string &);
    string decode(string &);
};