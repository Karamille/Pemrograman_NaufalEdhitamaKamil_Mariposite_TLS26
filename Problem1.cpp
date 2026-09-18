#include <iostream>

using namespace std;

int main() {
    int N, K;
    if (!(cin >> N >> K)) return 0;


    bool hidup[1005]; 
    for (int i = 1; i <= N; ++i) {
        hidup[i] = true;
    }

    int astronot_sisa = N;
    int posisi = 1; 

    cout << "Urutan astronot yang dieliminasi: ";

    while (astronot_sisa > 1) {
        int hitungan = 0;
        while (hitungan < K) {
            if (hidup[posisi]) {
                hitungan++;
            }
            if (hitungan < K) {
                posisi++;
                if (posisi > N) posisi = 1;
            }
        }

        hidup[posisi] = false;
        astronot_sisa--;
        int nomor_dieliminasi = posisi;

        cout << nomor_dieliminasi << (astronot_sisa == 1 ? "" : " ");

        while (!hidup[posisi]) {
            posisi++;
            if (posisi > N) posisi = 1;
        }

        if (nomor_dieliminasi % 2 == 0) {
            K += 2;
        } else {
            K -= 1;
        }

        if (K < 2) {
            K = 2;
        }
    }

    cout << "\n";

    for (int i = 1; i <= N; ++i) {
        if (hidup[i]) {
            cout << "Astronot terakhir yang bertahan: " << i << "\n";
            break;
        }
    }

    return 0;
}