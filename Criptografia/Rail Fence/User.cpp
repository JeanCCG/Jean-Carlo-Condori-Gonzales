//
// Created by JeanCarlo on 07/04/2021.
//
#include "User.h"
#include <string>
using namespace std;

Usuario::Usuario(int filas) {
    key=filas;
}
string Usuario::encode(string& msj){
    string code;
    //two keys to change the increment
    int key1=key;
    int key2=1;
    int key_use;
    int increment;
    int count;//to interleave the 2 keys (line 22)
    for (int i = 0; i < key; ++i) {
        count=0;
        for (int j = i; j < msj.length(); j+=increment) {
            if(count%2==0){
                key_use=key1;
            }else{
                key_use=key2;
            }
            if (key_use==1){
                key_use=key;
            }
            increment=key_use*2-2;//formula for the increase
            count++;
            code+=msj[j];
        }
        key1--;
        key2++;
    }
    return code;
}
string Usuario::decode(string& msj){
    string code;
    int key1=key;
    int key2=1;
    int key_use;
    int increment;
    int count;
    int k=0;
    char codee[msj.length()];//array-- that stores the characters-
    for (int i = 0; i < key; ++i) {
        count=0;
        for (int j = i; j < msj.length(); j+=increment) {
            if(count%2==0){
                key_use=key1;
            }else{
                key_use=key2;
            }
            if (key_use==1){
                key_use=key;
            }
            increment=key_use*2-2;
            count++;
            codee[j]=msj[k];
            k++;
        }
        key1--;
        key2++;
    }
    for (int i = 0; i < msj.length(); ++i) {
        code+=codee[i];
    }
    return code;
}