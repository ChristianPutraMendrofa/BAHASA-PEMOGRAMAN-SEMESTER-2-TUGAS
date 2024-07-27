# Definisi function
def sapa(nama):
    return f"Halo, {nama}!"

# Memanggil function
print(sapa("Andi"))


# Definisi recursive function untuk menghitung faktorial
def faktorial(n):
    if n == 0:
        return 1
    else:
        return n * faktorial(n-1)

# Memanggil recursive function
print(faktorial(5))
