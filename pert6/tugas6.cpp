#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur untuk menyimpan informasi item menu
struct MenuItem {
    string nama;
    double harga;
};

// Fungsi untuk menampilkan menu dan meminta input pilihan
int tampilkanMenu(const vector<MenuItem>& menu) {
    cout << "Menu Minuman:" << endl;
    int index = 1;
    for (const auto& item : menu) {
        cout << index << ". " << item.nama << " - Rp" << item.harga << endl;
        index++;
    }
    cout << "0. Selesai Memilih" << endl;
    cout << "Pilih minuman (masukkan nomor): ";
    int pilihan;
    cin >> pilihan;
    return pilihan;
}

int main() {
    // Menyiapkan menu minuman
    vector<MenuItem> menuMinuman = {
        {"Es duren", 6000},
        {"Es campur", 6000},
        {"Es jus", 7000},
        {"Teh", 5000},
        {"Kopi", 7000}
    };

    double total = 0.0;
    bool selesai = false;

    while (!selesai) {
        // Menampilkan menu minuman dan meminta input pilihan
        int pilihan = tampilkanMenu(menuMinuman);

        // Memproses pilihan pengguna
        if (pilihan >= 1 && pilihan <= menuMinuman.size()) {
            total += menuMinuman[pilihan - 1].harga;
            cout << "Anda memilih: " << menuMinuman[pilihan - 1].nama << " - Rp" << menuMinuman[pilihan - 1].harga << endl;
            cout << "Total sementara: Rp" << total << endl;
        } else if (pilihan == 0) {
            selesai = true;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }

    // Menampilkan total yang harus dibayar
    cout << "Total pembayaran: Rp" << total << endl;
    cout << "Terima kasih telah memesan!" << endl;

    return 0;
}