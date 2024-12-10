// Muhammad Maulana Ahsan, 240401010064, IF105, Algoritma dan Pemrograman
#include <iostream>
#include <string>
#define op1 "SMU"
#define op2 "D3"
#define op3 "S1"

using namespace std;

int main()
{
    string nama_lengkap;
    string temp_input;
    int golongan;
    int pendidikan;
    int jam_kerja;
    int honor_pokok = 3500000;
    int rate_lembur = 12500;
    int tunjangan_jabatan;
    int tunjangan_pendidikan;
    int lembur;
    char isLoop = 'Y';

    while (isLoop == 'Y' || isLoop == 'y') {
        cout << "Program Hitung Honor Karyawan Kontrak PT. DINGIN DAMAI" << endl;

        cout << "Nama Karyawan: ";
        getline(cin, nama_lengkap);

        cout << "Golongan (1, 2, 3): ";
        getline(cin, temp_input);
        golongan = stoi(temp_input);

        cout << "Pendidikan (SMU, D3, S1): " << endl;
        cout << "1. " << op1 << endl;
        cout << "2. " << op2 << endl;
        cout << "3. " << op3 << endl;
        cout << "Pendidikan Anda: ";
        getline(cin, temp_input);
        pendidikan = stoi(temp_input);

        cout << "Jam kerja (jam): ";
        getline(cin, temp_input);
        jam_kerja = stoi(temp_input);

        // Masuk ke output
        cout << "Karyawan yang bernama " << nama_lengkap << endl;
        cout << "Honor yang diterima Rp." << honor_pokok << endl;

        if (golongan == 1) {
            tunjangan_jabatan = honor_pokok * (5.0/100.0);
        } else if (golongan == 2) {
            tunjangan_jabatan = honor_pokok * (10.0/100.0);
        } else if (golongan == 3) {
            tunjangan_jabatan = honor_pokok * (15.0/100.0);
        } else {
            tunjangan_jabatan = 0;
        }
        cout << "Tunjangan jabatan Rp." << tunjangan_jabatan << endl;

        if (pendidikan == 1) {
            tunjangan_pendidikan = honor_pokok * (2.50/100.0);
        } else if (pendidikan == 2) {
            tunjangan_pendidikan = honor_pokok * (5.0/100.0);
        } else if (pendidikan == 3) {
            tunjangan_pendidikan = honor_pokok * (7.50/100.0);
        } else {
            tunjangan_pendidikan = 0;
        }
        cout << "Tunjangan Pendidikan Rp." << tunjangan_pendidikan << endl;

        if (jam_kerja > 8) {
            lembur = rate_lembur * (jam_kerja - 8);
        } else {
            lembur = 0;
        }
        cout << "Honor Lembur Rp." << lembur << endl;
        cout << "--------------------- +" << endl;
        cout << "Honor Yang Diterima Rp." << honor_pokok + tunjangan_jabatan + tunjangan_pendidikan + lembur << endl;

        cout << "Hitung ulang Honor Karyawan Lainnya (Y/N)?: ";
        getline(cin, temp_input);
        isLoop = temp_input[0];
    }
    
    return 0;
}