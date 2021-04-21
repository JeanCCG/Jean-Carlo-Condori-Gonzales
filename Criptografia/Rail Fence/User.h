//
// Created by JeanCarlo on 07/04/2021.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Usuario{
private:
    int key;
public:
    Usuario(int);
    string encode(string&);
    string decode(string&);
};
