#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <vector>
using namespace std;
#include "anak.h"

class anak;

//membuat class Ibu di file header Ibu.h
class Ibu {
public:
    //deklarasi member variabel pada class Ibu
        string nama;
        vector<anak*> daftar_anak;

        //membuat constructor dan destructor pada class Ibu
        Ibu(string pNama) :nama(pNama) {
            cout << "Ibu \"" << nama << "\" ada\n";
        };

        ~Ibu() {
            cout << "Ibu \"" << nama << "\" tidak ada\n";
        };

        //deklarasi prosedur untuk tambahAnak() dan cetakAnak()
        void tambahAnak(anak* pAnak);
        void cetakAnak();
};

#endif