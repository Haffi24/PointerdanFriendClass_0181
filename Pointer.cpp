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
   

}