#include "../model/ModelCustomer.h"
#include <iostream>
#include <string>
using namespace std;

void vAddCustomer(){
    string addNama, addTelp , addEmail , addNIK , addPass;
    cout <<"Masukan Nama : ";
    cin >> addNama;
     cout <<"Masukan No.Telp : ";
    cin >> addTelp;
     cout <<"Masukan Email : ";
    cin >> addEmail;
     cout <<"Masukan NIK : ";
    cin >> addNIK;
     cout <<"Masukan Password : ";
    cin >> addPass;
    mAddCustomer (addNama, addTelp, addEmail , addNIK, addPass);
    cout << endl;
}

void vViewCustomers (){
    mViewCustomer();
}

void vSearchCustomer(){
    string addNIK, addPass;
    cout << "Masukan NIK :";
    cin >> addNIK;
    int index = mSearchCustomer(addNIK,addPass);
    if (index !=-1){
        cout << "Data Customer" << endl;
        cout << "======================================================================================"<<endl;
        cout << "NAMA\t\t\tNo. TELP\t\t\tEMAIL\t\t\tNIK\t\t\tPASSWORD" <<endl;
        cout << "======================================================================================"<<endl;
        cout << namaCustomer[index] << "\t" << noTelp[index] << "\t" << email[index]  << "\t" << NIK[index]<< "\t" << password[index] <<endl;
        cout << "================================================================" << endl;
    } else{
        cout << "NIK TIDAK DITEMUKAN";
    } 
}



void vUpdatePass(){
    string addNIK , addPass , addNewPass;
    cout <<"Masukan NIK :";
    cin >> addNIK;
    cout <<"masukan pasword lama anda :";
    cin >> addPass;
    cout <<"Masukan Password baru anda : ";
    cin >> addNewPass;

    mUpdateCustomer(addNIK , addPass , addNewPass);
}