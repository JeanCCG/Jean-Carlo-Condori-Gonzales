#pragma once
#include <iostream>
#include <string>
using namespace std;
class BreakCesar{
private:
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    static int modulo(int );
public:
    string decode(string &);
};