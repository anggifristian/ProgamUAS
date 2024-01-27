#include <iostream>
#include <string>
#include "view/ViewBookingKamarHotel.h"
#include "view/ViewCustomer.h"
#include "view/ViewHotel.h"
#include "view/ViewTransaksi.h"

using namespace std;

void static_value(){
    maddHotel("HOTEL_CALIFORNIA", "SINGLE_BED, TWIN_BED, , LUXURY, SPRING_BED", 12);
    maddHotel("HOTEL_MODERNIA", "SRING_BED, TRIPLE_BED, , LUXURY", 10);
    maddHotel("HOTEL_VIRGINIA", "SUITS_BED, DOEBLE_BED", 2);
}

void menuHotel() {
    int pilihanHotel;
    while(true){
        cout << "======================================================================================"<<endl;
        cout << "|                                     MENU HOTEL                                     |" << endl;
        cout << "======================================================================================"<<endl;
        cout << "1. CARI HOTEL PILIHAN HOTEL ANDA " << endl;
        cout << "2. BOOKING HOTEL" << endl;
        cout << "3. LIHAT DATA BOOKING" << endl;
        cout << "4. PEMBAYARAN" << endl;
        cout << "5. EXIT" << endl;
        cout << "Masukan pilihan anda : ";
        cin >> pilihanHotel;
        cout << endl;
        switch (pilihanHotel){
        case 1:
            vSearchHotel();
            break;
        case 2: 
            vAddDataCheckIn();
            break;
        case 3: 
            vSearchJenisKamar();
            vViewDataCheckIn();
            break;
        case 4: 
            vViewTransaksi();
            vViewDataCheckIn();
            break;
        case 5:
            cout << "TERIMAKASIH SUDAH MENGGUNAKAN APLIKASI INI";
            exit(0);
        default:
            cout << "PILIHAN ANDA TIDAK VALID. SILAHKAN PILIH LAGI.\n";
            break;
        }
    }
}

void menuRegistrasi(){
    int pilihan;
    while(true){
        cout << "====================================================================" << endl;
        cout << "|                           REGISTRASI CUSTOMER                    |" << endl;
        cout << "====================================================================" << endl;
        cout << "1. MASUKAN DATA ANDA" << endl;
        cout << "2. LIHAT DATA ANDA" << endl;
        cout << "3. UPDATE DATA ANDA" << endl;
        cout << "4. LANJUT" << endl;
        cout << "5. EXIT" << endl;
        cout << "Masukan pilihan anda : ";
        cin >> pilihan;
        switch (pilihan){
        case 1:
            vAddCustomer();
            break;
        case 2:
            vViewCustomers();
            break;
        case 3:
            vUpdatePass();
            break;
        case 4:
            static_value();
            vViewHotel();
            menuHotel();
            break;
        case 5:
            cout << "MATURNUWUN";
            return;
            break;
        default:
            cout << "PILIHAN ANDA TIDAK VALID. SILAHKAN PILIH LAGI.\n";
            break;
        }
    }
}


int main(){
    menuRegistrasi();
    return 0;
}