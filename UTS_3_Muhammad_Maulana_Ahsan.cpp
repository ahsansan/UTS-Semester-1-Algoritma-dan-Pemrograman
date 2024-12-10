// Muhammad Maulana Ahsan, 240401010064, IF105, Algoritma dan Pemrograman
#include <iostream>

using namespace std;

int main() 
{
    char isLoop = 'Y';
    char brand;
    int ukuran;
    int harga;
    int jumlah;

    while (isLoop == 'Y' || isLoop == 'y') {
        cout << "TOKO KELONTONG KERONCONGAN" << endl;
        cout << "--------------------------" << endl;
        cout << "A. Susu Dancow" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;
        cout << "B. Susu Bendera" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;
        cout << "C. Susu SGM" << endl;
        cout << "   1. Ukuran Kecil" << endl;
        cout << "   2. Ukuran Sedang" << endl;
        cout << "   3. Ukuran Besar" << endl;

        cout << "Masukan Jenis Susu: ";
        cin >> brand;
        cout << "Masukan Ukuran Kaleng: ";
        cin >> ukuran;

        if (brand == 'A') {
            if (ukuran == 1) {
                harga = 15000;
            } else if (ukuran == 2) {
                harga = 20000;
            } else if (ukuran == 3) {
                harga = 25000;
            } else {
                harga = 0;
            }
        } else if (brand == 'B') {
            if (ukuran == 1) {
                harga = 13500;
            } else if (ukuran == 2) {
                harga = 17500;
            } else if (ukuran == 3) {
                harga = 20000;
            } else {
                harga = 0;
            }
        } else if (brand == 'C') {
            if (ukuran == 1) {
                harga = 15000;
            } else if (ukuran == 2) {
                harga = 18500;
            } else if (ukuran == 3) {
                harga = 22000;
            } else {
                harga = 0;
            }
        } else {
            harga = 0;
        }
        cout << "Harga Satuan Barang Rp." << harga << endl;

        cout << "Jumlah Yang dibeli: ";
        cin >> jumlah;

        cout << "Harga Yang Harus dibayar Sebesar Rp." << (harga * jumlah) << endl;

        cout << "Ingin hitung transaksi lainnya (Y/N)?: ";
        cin >> isLoop;
    }

    return 0;
}