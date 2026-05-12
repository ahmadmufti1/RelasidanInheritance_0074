#include <iostream>
#include <vector>
using namespace std;

//deklarasi class dokter
class dokter;
//deklarasi dan pembuatan calss pasien
class pasien {
    public:
        string nama;
        vector<dokter*> daftar_dokter;

        //pembuatan constructor dan destructor pada class pasien
        pasien(string pNama) : nama(pNama) {
            cout << "Pasien \"" << nama << "\" ada\n";
        };
        ~pasien() {
            cout << "Pasien \"" << nama << "\" tidak ada\n";
        };

        //deklarasi prosedur untuk tambahDokter() dan cetakDokter()
        void tambahDokter(dokter*);
        void cetakDokter();
};
