#include <iostream>
#include "cesar.h"
using namespace std;

int main() {
    string msj = "Z-u4FCv28Bu4xG4E8BEuABu4FGáu2B.C-4Gv.4AG4uIv2íBu34u.vG4E8vu(4Fu3428E,uABu4FuHAuIv2íBuC4E542GB)uF8ABuDH4u2BAG84A4uHAvu1v9vu34AF83v3u34uCvEGí2H-vF,uCE43B.8AvAG4.4AG4u6vFu783Eó64AB,uvFíu2B.BuEv38v28óAu4-42GEB.v6AéG82v";
    Cesar Receptor(21);
    msj = Receptor.decode(msj);
    cout<<"b) Descifrado: "<<msj<<endl;
}