#include <iostream>
#include <string>
using namespace std;


void mViewTransaksi(){
    string kodeTransaksi = "Q12W";
    int hargaHotel = 200000;
    int noRek = 123213213;
    int nTransaksi;
    cout << endl;
    cout << "DATA PEMBAYAERAN ANDA : " << endl;
    for (int i = 0; i < nTransaksi; i++){
        cout << "================================================================================="<<endl;
        cout << "|    NOMINAL PEMBAYARAN            KODE PEMBAYARAN              No. REKENING    |" <<endl;
        cout << "================================================================================="<<endl;
        cout << hargaHotel<< "\t\t\t\t" <<kodeTransaksi<< "\t\t\t\t" << noRek <<endl;
        cout << endl;
    }
}