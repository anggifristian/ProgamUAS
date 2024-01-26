#include <iostream>
#include "../Database/DatabaseCustomer.h"
#include <string>

using namespace std;

void mAddCustomer(string addNama, string addTelp, string addEmail, string addNIK, string addPass){
    namaCustomer[nCustomer] = addNama;
    noTelp[nCustomer] = addTelp;
    email[nCustomer] = addEmail;
    NIK[nCustomer] = addNIK;
    password[nCustomer] = addPass;
    nCustomer++;
}

void mViewCustomer(){
    cout << "Data Customer" <<endl;
    cout << "Jumlah Customer : " <<nCustomer << endl;
    cout << "======================================================================================"<<endl;
    cout << "Nama\t\tNo. Telp\t\temail\t\tNIK\t\tpassword" <<endl;
    cout << "======================================================================================"<<endl;
    for (int i = 0; i< nCustomer; i++){
        cout << namaCustomer[i] << "\t\t" << noTelp[i] << "\t\t" << email[i]  << "\t\t" << NIK[i]<< "\t\t" << password[i] <<endl;
    }
    cout << "======================================================================================"<<endl;  
}

int mSearchCustomer(string addNIK , string addPass){
    for(int i = 0; i<nCustomer; i++){
        if (NIK[i] == addNIK && password[i] == addPass){
            return i;
        }
    }
    return -1;
}

void mUpdateCustomer(string addNIK, string addPass, string addNewPass){
    newpassword[nCustomer] = addNewPass;
    int index = mSearchCustomer (addNIK, addPass);
    if (index != -1) {
        password[index] = addNewPass;
        cout << "password anda berhasil diubah" <<endl;
    } else {
        cout << "NIK ATAU PASSWORD ANDA TIDAK TERDAFTAR" << endl;
        
    }
}

bool mlogin (string addNIK, string addPass){
    for ( int i = 0; i < nCustomer; i++){
        if (NIK[i] == addNIK && password[i] == addPass) {
            return true;
        }
        
    }
    return false;
}