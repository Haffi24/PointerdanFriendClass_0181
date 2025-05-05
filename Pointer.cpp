#include <iostream>
using namespace std;

class Dosen{
    public:
    string nama;
    void tampilNama() {
        cout << "Namanya adalah" << nama << endl;
    }
};

class staff {
    public:
    int nidn;

};

int main (){
    Dosen Ds;
    Ds.nama = "Giga";
    Ds.tampilNama();

    Dosen &dsref = Ds;
    dsref.nama = "Joko"
    cout << "Alamat memori = " << &dsref << endl;
    dsref.tampilNama();

    Dosen *pds =&Ds;
    pds->nama = "Reza";
    cout << "Alamat memori = " << pds << endl;
    pds->tampilNama();


    int a = 5;
    int b = 3;
    int *c = &a;
    *c =9;
    cout << endl;
    cout << endl;

    cout << "Alamat memori a = " << &a << endl;
    cout << "Alamat memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;
    c = &b;
    cout << "Alamat memori c = " << c << endl;
    cout << "Cetak C = " << *c << endl;

}