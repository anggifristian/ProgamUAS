#include <iostream>
#include "../model/ModelHotel.h"
#include <string>
using namespace std;


void vAddHotel(){
    string addNamaHotel, addJenisKamar;
    int addJumlahKamar;

    cout << "Masukan Nama Hotel : ";
    cin.ignore();
    getline(cin, addNamaHotel);
    cout << "Masukan Jenis Kamar : ";
    getline (cin, addJenisKamar);
    cout << "Masukan Jumlah Tamu : ";
    cin >> addJumlahKamar;
    maddHotel (addNamaHotel, addJenisKamar,addJumlahKamar);
    cout << endl;
}

void vViewHotel(){
    mViewHotel();
}

void vSearchHotel(){
    string addNamaHotel;
    cout << "masukan Nama Hotel yang anda inginkan: ";
    cin >> addNamaHotel;
    int index = mSearchHotel(addNamaHotel);
    if (index !=-1){
        cout << " Nama Hotel: " << namaHotel[index];
        cout << " Jenis Kamar: " << jenisKamar[index];
        cout << " Jumlah Tamu: " << jumlahKamar[index];
    }else {
        cout << "hotel tidak ditemukan";
    }
}
