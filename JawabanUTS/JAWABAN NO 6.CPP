int main(){
    menu ();
    tambahan ();
    kurang ();
    kali ();
    bagi();
    return 0;
}
```
```
#include <iostream>
using namespace std;

// Deklarasi fungsi
void menu();
void tambahan();
void kurang();
void kali();
void bagi();

// Fungsi utama
int main() {
    menu();
    tambahan();
    kurang();
    kali();
    bagi();
    return 0;
}

// Fungsi untuk menampilkan menu
void menu() {
    cout << "Masukkan angka pertama dan angka kedua untuk melakukan operasi berikut:" << endl;
}

// Fungsi untuk penjumlahan
void tambahan() {
    int angka1, angka2;
    cout << "masukkan angka pertama: ";
    cin >> angka1;
    cout << "masukkan angka kedua: ";
    cin >> angka2;
    cout << "penjumlahan: " << (angka1 + angka2) << endl;
}

// Fungsi untuk pengurangan
void kurang() {
    int angka1, angka2;
    cout << "masukkan angka pertama: ";
    cin >> angka1;
    cout << "masukkan angka kedua: ";
    cin >> angka2;
    cout << "pengurangan: " << (angka1 - angka2) << endl;
}

// Fungsi untuk perkalian
void kali() {
    int angka1, angka2;
    cout << "masukkan angka pertama: ";
    cin >> angka1;
    cout << "masukkan angka kedua: ";
    cin >> angka2;
    cout << "perkalian: " << (angka1 * angka2) << endl;
}

// Fungsi untuk pembagian
void bagi() {
    int angka1, angka2;
    cout << "masukkan angka pertama: ";
    cin >> angka1;
    cout << "masukkan angka kedua: ";
    cin >> angka2;
    if (angka2 != 0) {
        cout << "pembagian: " << (angka1 / angka2) << endl;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
    }
}
