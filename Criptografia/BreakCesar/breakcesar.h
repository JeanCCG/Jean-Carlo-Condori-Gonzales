#pragma once
#include <iostream>
#include <string>
using namespace std;
class BreakCesar{
private:
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int key = 3;
    static int modulo(int );
public:
    string decode(string &);
};