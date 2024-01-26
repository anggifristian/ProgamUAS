#include <iostream>
#include <string>
#include "../model/ModelTransaksi.h"
using namespace std;

void vViewTransaksi(){
    string jawaban;
    cout << "apakah anda ingin melakukan pembayaran?";
    cin >> jawaban;
    if (jawaban == "y" && jawaban == "Y"){
        mViewTransaksi();
    } else if (jawaban == "n" && jawaban == "N"){
        cout << "Segera lakukan pembayaran";
}
}