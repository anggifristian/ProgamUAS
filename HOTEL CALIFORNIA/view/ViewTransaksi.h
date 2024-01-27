#include <iostream>
#include <string>
#include "../model/ModelTransaksi.h"
using namespace std;

void vViewTransaksi(){
    string jawaban;
    cout << "APAKAH ANDA AKAN MELAKUKAN PEMBAYARAN? (y/n)";
    cin >> jawaban;
    if (jawaban == "y" || jawaban == "Y"){
        mViewTransaksi();
    } else if (jawaban == "n" || jawaban == "N"){
        cout << "SEGERA LAKUKAN PEMBAYARAN"; 
    }
}
