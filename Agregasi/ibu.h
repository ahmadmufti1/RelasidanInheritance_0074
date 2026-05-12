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

//pendefinisian prosedur - prosedur pada class Ibu diluar class
void Ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}

void Ibu::cetakAnak() {
    cout << "Daftar anak dari Ibu \"" << this->nama << "\": \n";
    for (auto& a : daftar_anak) 
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}

#endif