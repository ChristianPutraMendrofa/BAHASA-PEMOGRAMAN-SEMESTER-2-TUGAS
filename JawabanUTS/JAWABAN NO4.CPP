#include <iostream>

int main() {
    int tahunLahir, tahunSekarang;
    
    // Tahun sekarang
    tahunSekarang = 2024;
    
    // Input tahun lahir
    std::cout << "Masukkan tahun kelahiran kalian: ";
    std::cin >> tahunLahir;
    
    // Hitung usia
    int usia = tahunSekarang - tahunLahir;
    
    // Output hasil
    std::cout << "berarti usia kalian sekarang adalah " << usia << " tahun" << std::endl;
    
    return 0;
}