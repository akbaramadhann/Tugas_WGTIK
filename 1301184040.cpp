#include <iostream>

using namespace std;


int main()
{
    /*
    Program ini bertujuan untuk menghitung sebuah dimensi suatu barang atau paket yang akan dikirimkan
    Parameter yang akan digunakan :
    a. Panjang
    b. Lebar
    c. Tinggi
    d. Berat
    */
    int pan, leb, ting, berat;

    cout << "Panjang: ";
    cin >> pan;
    cout << "Lebar: ";
    cin >> leb;
    cout << "Tinggi: ";
    cin >> ting;
    cout << "Berat Paket: ";
    cin >> berat;
    cout << endl;
    
    // cek apabila panjang lebih dari 150 satuan panjang
    if (pan <= 150){
        //cek apabila panjang + 2*(lebar + tinggi) kurang sama dengan dari 400
        if ((pan + 2*(leb+ting)) <= 400){
            //cek panjang * lebar * tinggi dibagi 60 kurang sama dengan 50
            if ((pan * leb * ting / 60) <= 50){
                cout << pan << " " << leb << " " << ting << " " << berat << endl;
                cout << "Berat Terhitung: " << berat << endl;
            } else {
                cout << pan << " " << leb << " " << ting << " " << berat<< endl;
                cout << "Paket tidak dikirim : Sangat berat" << endl;
            }
        } else {
            cout << pan << " " << leb << " " << ting << " " << berat<< endl;
            cout << "Paket tidak dikirim : Geda bet geda" << endl;
        }
    } else {
        cout << pan << " " << leb << " " << ting << " " << berat << endl;
        cout << "Tidak dikirim : Panjang betul paketnya" << endl;
    }

    return 0;
}
