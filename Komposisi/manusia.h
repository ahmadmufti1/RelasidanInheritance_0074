#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
#include <string>
using namespace std;

//membuat class manusia di file header manusia.h
class Manusia {
public:
    //memmbuat member variabel pada class manusia
    string nama;
    Jantung varJantung;

    //membuaat constructor dan destructor pada class manusia
    Manusia(string pNama) : nama(pNama) {
        cout << nama << "Hidup\n";
    }
    ~Manusia(){
        cout<< nama << "Mati\n";
    }

};

#endif