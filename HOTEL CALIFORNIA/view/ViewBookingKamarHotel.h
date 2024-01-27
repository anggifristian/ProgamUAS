#include <iostream>
#include <string>
#include"../model/ModelBookingKamar.h"
using namespace std;

void vAddDataCheckIn(){
    string addJenisKamarKosong;
    string addTanggalBooking, addTanggalCheckOut;
    cout << "MASUKKAN JENIS KAMAR : ";
    cin >> addJenisKamarKosong;
    cout << "MASUKKAN TANGGAL BOOKING HOTEL : ";
    cin >> addTanggalBooking;
    cout << "MASUKKAN TANGGAL CHECK OUT : ";
    cin >> addTanggalCheckOut;
    mAddDataCheckIn(addJenisKamarKosong, addTanggalBooking, addTanggalCheckOut);
    cout << endl;
}

void vViewDataCheckIn(){
    mViewDataCheckIn();
}

void vSearchJenisKamar(){
    string addJenisKamarKosong;
    cout << "LIHAT DATA BOOKING ANDA DENGAN MASUKKAN JENIS KAMAR :";
    cin >> addJenisKamarKosong;
    int index = mSearchJenisKamarKosong(addJenisKamarKosong);
    if (index != -1){
        cout << "JENIS KAMAR : " << jenisKamarKosong[index]<<endl;
        cout << "TERIMAKASIH";
        cout << endl;
    }
}