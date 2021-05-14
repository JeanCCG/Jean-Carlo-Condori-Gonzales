#pragma once
#include <iostream>
#include <string>
using namespace std;
class Afin{
private:
    string alphabet = "yzpobresiancdfghjklm#qtuvwx";
    int modulo(int,int);
    int algoritmoEuclides_ext(int, int, int, int, int, int);
    int algoritmoEuclides(int ,int );
public:
    int a ;
    int b ;
    Afin();
    Afin(int, int);
    string encode(string &);
    string decode(string &);
};