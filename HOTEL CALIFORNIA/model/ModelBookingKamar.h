#include <string>
#include <iostream>
#include "../Database/DatabaseBookingHotel.h"
using namespace std;

void mAddDataCheckIn(string addJenisKamarKosong, string addTanggalBooking, string addTanggalCheckOut ) {
    jenisKamarKosong[nBooking] = addJenisKamarKosong;
    tanggalBooking[nBooking] = addTanggalBooking;
    tanggalCheckout[nBooking] = addTanggalCheckOut;
    nBooking++;
}

void mViewDataCheckIn() {
    cout << "Daftar Kamar hotel" << endl;
    cout << "=================================================================================="<<endl;
    cout << "|JENIS KAMAR            TANGGAL BOOKING ANDA              TANGGAL CHECK OUT ANDA |" <<endl;
    cout << "=================================================================================="<<endl;
    for (int i = 0; i < nBooking; i++){
        cout << jenisKamarKosong[i] << "\t\t\t" << tanggalBooking[i] << "\t\t\t" << tanggalCheckout[i] << endl;
    }
}

int mSearchJenisKamarKosong(string addJenisKamarKosong){
    int index = -1;
    for (int i = 0; i < nBooking; i++){
        if (jenisKamarKosong[i] == addJenisKamarKosong){
            index = i;
            break;
        }
    }
    return index;
}