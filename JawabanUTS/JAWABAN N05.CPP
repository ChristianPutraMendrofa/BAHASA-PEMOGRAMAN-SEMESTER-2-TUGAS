#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan dua angka
    int angka1, angka2;

    // Meminta pengguna untuk memasukkan angka pertama
    cout << "masukkan angka pertama : ";
    cin >> angka1;

    // Meminta pengguna untuk memasukkan angka kedua
    cout << "masukkan angka kedua : ";
    cin >> angka2;

    // Melakukan operasi aritmatika dan menampilkan hasilnya
    cout << "penjumlahan : " << (angka1 + angka2) << endl;
    cout << "pengurangan : " << (angka1 - angka2) << endl;
    cout << "perkalian : " << (angka1 * angka2) << endl;
    cout << "pembagian : " << (angka1 / angka2) << endl;

    return 0;
}
