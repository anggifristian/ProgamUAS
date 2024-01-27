#include <iostream>
#include "../model/ModelHotel.h"
#include <string>
using namespace std;


void vAddHotel(){
    string addNamaHotel, addJenisKamar;
    int addJumlahKamar;
    cout << "MASUKKAN NAMA HOTEL : ";
    cin >> addNamaHotel;
    cout << "MASUKKAN JENIS KAMAR : ";
    cin >> addJenisKamar;
    cout << "JUMLAH SISA KAMAR : ";
    cin >> addJumlahKamar;
    maddHotel (addNamaHotel, addJenisKamar, addJumlahKamar);
    cout << endl;
}

void vViewHotel(){
    mViewHotel();
}

void vSearchHotel(){
    string addNamaHotel;
    cout << "MASUKKAN NAMA HOTEL : ";
    cin >> addNamaHotel;
    int index = mSearchHotel(addNamaHotel);
    if (index != -1){
        cout << " NAMA HOTEL: " << namaHotel[index] << endl;
        cout << " JENIS KAMAR: " << jenisKamar[index] << endl;
        cout << " JUMLAH SISA KAMAR : " << jumlahKamar[index] << endl;
    } else {
        cout << "HOTEL TIDAK DITEMUKAN";
    }
}
