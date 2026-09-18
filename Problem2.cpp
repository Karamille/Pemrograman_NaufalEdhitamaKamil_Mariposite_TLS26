#include <iostream>

using namespace std;

int main() {
    char kata[1005];
    if (!(cin >> kata)) return 0;

    char kata_sandi[1005];
    int nomor = 0;

    // Menghitung nomor teks secara manual tanpa library
    while (kata[nomor] != '\0') {
        nomor++;
    }

    for (int i = 0; i < nomor; ++i) {
        if (i == 0) {
            // Huruf pertama tidak mengalami perubahan
            kata_sandi[i] = kata[i];
        } else {
            // Hitung nilai pergeseran dari huruf asli tepat sebelumnya (A=1, B=2, dst)
            int geser = kata[i - 1] - 'A' + 1;

            // Konversi huruf saat ini ke indeks 0-25 (A=0, B=1, dst)
            int nilai_sekarang = kata[i] - 'A';

            // Rumus pergeseran dengan siklus modulo 26
            int nilai_baru = (nilai_sekarang + geser) % 26;

            // Ubah kembali menjadi karakter huruf ASCII
            kata_sandi[i] = 'A' + nilai_baru;
        }
    }

    // Penanda akhir karakter array
    kata_sandi[nomor] = '\0';

    cout << kata_sandi << "\n";

    return 0;
}