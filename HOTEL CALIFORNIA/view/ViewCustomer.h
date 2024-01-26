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
        cout << "================================================================" << endl;
        cout << "Nama\t\tNo.Telp\t\tEmail\t\tNIK\t\tPasssword" << endl;
        cout << "================================================================" << endl;
        cout << namaCustomer[index] << "\t\t" << noTelp[index] << "\t\t" << email[index]  << "\t\t" << NIK[index]<< "\t\t" << password[index] <<endl;
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