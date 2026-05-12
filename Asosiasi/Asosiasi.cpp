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

//pendefinisian prosedur - prosedur pada class dokter dan pasien diluar class
void pasien::tambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
};

void pasien::cetakDokter() {
    cout << "Daftar dokter yang menangani pasien \"" << this->nama << "\": \n";
    for (const auto& a : daftar_dokter) 
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}

void dokter::tambahPasien(pasien* pPasien) {
    daftar_pasien.push_back(pPasien);
    pPasien->tambahDokter(this);
}

void dokter::cetakPasien() {
    cout << "Daftar pasien dari dokter \"" << this->nama << "\": \n";
    for (const auto& a : daftar_pasien) 
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}
