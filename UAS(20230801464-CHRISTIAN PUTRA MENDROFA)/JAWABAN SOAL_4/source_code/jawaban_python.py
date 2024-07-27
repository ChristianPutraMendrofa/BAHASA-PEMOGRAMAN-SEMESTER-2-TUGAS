import sqlite3

# Membuat koneksi ke database (atau membuat database baru jika belum ada)
conn = sqlite3.connect('example.db')

# Membuat objek cursor
cursor = conn.cursor()

# Membuat tabel baru
cursor.execute('''
    CREATE TABLE IF NOT EXISTS users (
        id INTEGER PRIMARY KEY,
        name TEXT,
        age INTEGER
    )
''')

# Menyisipkan data ke tabel
cursor.execute('''
    INSERT INTO users (name, age) VALUES (?, ?)
''', ('Alice', 25))

# Menyimpan perubahan
conn.commit()

# Mengambil data dari tabel
cursor.execute('SELECT * FROM users')
rows = cursor.fetchall()

# Menampilkan data yang diambil
for row in rows:
    print(row)

# Menutup koneksi
conn.close()
