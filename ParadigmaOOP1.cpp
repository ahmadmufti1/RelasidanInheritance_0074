#include <iostream>
using namespace std;

//deklarasi class Mahasiswa
class Mahasiswa {
    private:
    const int id;
    string nama;
    float nilai;

    //membuat member class public
    public:
    //membuat member initialization list dari class mahasiswa
    Mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai) {
        
    };
    //membuat destructor pada class mahasiswa
    ~Mahasiswa() {
        cout << "id " << id <<endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main()
{
    //deklarasi dan pemberian nilai object mhs
    Mahasiswa mhs(12, "Asroni", 90.5);

    return 0;
}