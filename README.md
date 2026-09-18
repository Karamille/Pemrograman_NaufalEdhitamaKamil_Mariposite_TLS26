# Pemrograman_NaufalEdhitamaKamil_Mariposite_TLS26
# Solusi Tugas Pemrograman C++

Repositori ini berisi implementasi solusi untuk dua permasalahan logika pemrograman menggunakan bahasa C++. Seluruh kode dibuat menggunakan pustaka standar `<iostream>` tanpa mengimpor pustaka atau fungsi bawaan tambahan (seperti `strlen` atau `std::string`).

---

## Problem 1: The Last Astronaut

### Deskripsi Masalah
Permainan simulasi eliminasi astronot yang disusun dalam formasi melingkar berurutan dari nomor $1$ hingga $N$. Eliminasi dilakukan berdasarkan hitungan $K$ secara sirkular hingga tersisa $1$ astronot sebagai pemenang.

### Aturan Utama
* **Inisialisasi:** Sebanyak $N$ astronot diatur dalam lingkaran dan ditandai sebagai aktif. Hitungan awal dimulai dari astronot nomor $1$.
* **Mekanisme Eliminasi:** Hitungan berjalan sebanyak $K$ langkah pada astronot yang masih aktif. Astronot pada hitungan ke-$K$ dieliminasi dari permainan.
* **Pembaruan Nilai K:** Setelah astronot dieliminasi, nilai $K$ diperbarui berdasarkan nomor astronot yang keluar:
  * Jika nomor astronot **genap**, nilai $K$ bertambah $2$ ($K = K + 2$).
  * Jika nomor astronot **ganjil**, nilai $K$ berkurang $1$ ($K = K - 1$).
  * Nilai $K$ memiliki batas minimum $2$ (jika $K < 2$, maka $K$ otomatis menjadi $2$).
* **Kondisi Akhir:** Proses berulang sampai hanya tersisa $1$ astronot aktif.

---

## Problem 2: Alien-In-The-Middle

### Deskripsi Masalah
Program enkripsi teks menggunakan metode pergeseran huruf (*Caesar Cipher* dinamis) di mana pergeseran huruf saat ini ditentukan oleh nilai alfabet dari huruf asli sebelumnya.

### Aturan Enkripsi
1. **Penghitungan Panjang Teks:** Panjang array karakter dihitung secara manual menggunakan perulangan `while` hingga menemukan karakter null (`'\0'`).
2. **Karakter Pertama (Indeks 0):** Karakter pertama tidak mengalami perubahan/pergeseran dan langsung disalin ke teks hasil sandi.
3. **Karakter Selanjutnya (Indeks $i \ge 1$):**
   * Pergeseran (`geser`) dihitung dari posisi huruf asli tepat sebelumnya ($A=1, B=2, \dots, Z=26$).
   * Huruf saat ini dikonversi ke indeks $0-25$, ditambahkan nilai `geser`, lalu diproses dengan modulo $26$ agar pergeseran tetap berada dalam rentang $A-Z$.
4. **Format Output:** Hasil enkripsi ditutup dengan karakter `'\0'` dan ditampilkan ke layar.

