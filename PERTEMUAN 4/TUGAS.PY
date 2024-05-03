# Fungsi untuk perkalian
def perkalian(a, b):
    return a * b

# Fungsi untuk pengurangan
def pengurangan(a, b):
    return a - b

# Fungsi untuk penambahan
def penambahan(a, b):
    return a + b

# Fungsi untuk pembagian
def pembagian(a, b):
    if b != 0:
        return a / b
    else:
        return "Tidak bisa dibagi oleh nol"

# Main program
while True:
    print("Pilih operasi:")
    print("1. Perkalian")
    print("2. Pengurangan")
    print("3. Penambahan")
    print("4. Pembagian")
    print("5. Keluar")
    pilihan = input("Masukkan pilihan (1/2/3/4/5): ")

    if pilihan == '5':
        break

    angka1 = float(input("Masukkan angka pertama: "))
    angka2 = float(input("Masukkan angka kedua: "))

    if pilihan == '1':
        print((angka1), "*", (angka2), "= ", perkalian(angka1, angka2))
    elif pilihan == '2':
        print((angka1), "-", (angka2), "= ", pengurangan(angka1, angka2))
    elif pilihan == '3':
        print((angka1), "+", (angka2), "= ", penambahan(angka1, angka2))
    elif pilihan == '4':
        print((angka1), "/", (angka2), "= ", perkalian(angka1, angka2))
    else:
        print("Pilihan tidak valid")