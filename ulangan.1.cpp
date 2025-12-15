//TUGAS 1

#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
   
    double harga_barang;
    double diskon_persen;
    double jumlah_diskon;
    double harga_setelah_diskon;

    
    cout << "selamat datang di toko unisba" << endl;
    cout << "==============================" << endl << endl;

    cout << "silahkan masukkan:" << endl;
    cout << "Harga barang (Rp) = ";
    cin >> harga_barang;

    cout << "Diskon barang (%) = ";
    cin >> diskon_persen;

    
    jumlah_diskon = harga_barang * (diskon_persen / 100.0);

    harga_setelah_diskon = harga_barang - jumlah_diskon;


    cout << endl << "hasil :" << endl;


    cout << "jumlah diskon           = Rp " << jumlah_diskon << endl;
    cout << "Harga setelah diskon    = Rp " << harga_setelah_diskon << endl;

    return 0;
}
