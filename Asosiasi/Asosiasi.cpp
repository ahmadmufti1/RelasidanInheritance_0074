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

//pembuatan class dokter
class dokter{
    public:
    //deklarasi member variabel pada class dokter
    string nama;
    vector<pasien*> daftar_pasien;

    //pembuatan constructor dan destructor pada class dokter
    dokter(string pNama) : nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    };
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    };

    //deklarasi prosedur untuk tambahPasien() dan cetakPasien()
    void tambahPasien(pasien*);
    void cetakPasien();
};
