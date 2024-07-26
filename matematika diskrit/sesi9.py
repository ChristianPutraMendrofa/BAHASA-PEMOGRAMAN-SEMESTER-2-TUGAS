import string

def create_cipher_dict(key):
    """
    Creates a dictionary for the substitution cipher based on the provided key.
    """
    alphabet = string.ascii_uppercase
    key = key.upper()

    # Ensure key contains no duplicates and is the same length as the alphabet
    if len(set(key)) != len(alphabet):
        raise ValueError("Key must contain 26 unique characters.")
    
    return dict(zip(alphabet, key))

def encrypt(plaintext, key):
    """
    Encrypts the plaintext using the substitution cipher with the provided key.
    """
    cipher_dict = create_cipher_dict(key)
    plaintext = plaintext.upper()
    ciphertext = ''.join(cipher_dict.get(char, char) for char in plaintext)
    return ciphertext

def decrypt(ciphertext, key):
    """
    Decrypts the ciphertext using the substitution cipher with the provided key.
    """
    cipher_dict = create_cipher_dict(key)
    inverse_cipher_dict = {v: k for k, v in cipher_dict.items()}
    ciphertext = ciphertext.upper()
    plaintext = ''.join(inverse_cipher_dict.get(char, char) for char in ciphertext)
    return plaintext

# Contoh penggunaan
key = "QWERTYUIOPLKJHGFDSAZXCVBNM"  # Kunci pengganti huruf
plaintext = "HELLO WORLD"
ciphertext = encrypt(plaintext, key)
decrypted_text = decrypt(ciphertext, key)

print(f"Plaintext: {plaintext}")
print(f"Ciphertext: {ciphertext}")
print(f"Decrypted: {decrypted_text}")
