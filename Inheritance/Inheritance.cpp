#include <iostream>
#include <string>
using namespace std;

//pembuatan class orang
class orang {
public:
    //deklarasi member variabel pada class orang
    string nama;

    //pembuatan constructor dan destructor pada class orang
    orang(string pNama) : nama(pNama) {
        cout << "Orang dibuat\n" << endl;
    }

    ~orang() {
        cout << "Orang dihapus\n" << endl;
    }

    //pembuatan function jumlah
    int jumlah(int a, int b) {
        return a + b;
    }
};

//pembuatan class pelajar sebagai pewaris dari class orang
class pelajar : public orang {
    public:
    //deklarasi member variabel pada class pelajar
    string sekolah;

    //pembuatan constructor dan destructor pada class pelajar
    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dibuat\n" << endl;
    }

    ~pelajar() {
        cout << "Pelajar dihapus\n" << endl;
    }

    //pembuatan function perkenalan()
    void perkenalan() {
        cout << "Halo, nama saya " + nama + " dari " + sekolah + "\n\n";
    }
};

int main()
{
    //deklarasi dan pemberian nilai untuk variabel object dari siswa1
    pelajar siswa1("Andi Laksono", "SMAN 1 Bantul");
    //pemanggulan function perkenalan() dari class pelajar
    siswa1.perkenalan();
    //pemanggilan function warisan dari class orang kepada class obeject
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;
}