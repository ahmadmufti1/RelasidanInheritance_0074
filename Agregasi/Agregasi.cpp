#include <iostream>
#include <vector>
#include <string>
using namespace std;

//penyertaan file header ibu.h dan anak.h
#include "ibu.h"
#include "anak.h"

int main()
{
    //deklarasi dan pemberian nilai variabel pointer untuk objek dari class ibu dan anak
    Ibu* varibu = new Ibu("Rani");
    Ibu* varibu2= new Ibu("Sari");
    anak* varanak1 = new anak("tono");
    anak* varanak2 = new anak("tiara");
    anak* varanak3 = new anak("dini");

    //pemanggil dan pemberian argument pada prosedur tambahAnak() untuk menambahkan objek anak ke dalam daftar_anak pada objek ibu
    varibu->tambahAnak(varanak1);
    varibu->tambahAnak(varanak2);
    varibu->tambahAnak(varanak3);

    //pemanggilan prosedur cetakAnak()
    varibu->cetakAnak();
    varibu2->cetakAnak();

    return 0;
}