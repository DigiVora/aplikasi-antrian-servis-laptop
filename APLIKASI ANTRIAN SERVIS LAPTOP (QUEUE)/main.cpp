/*
===========================================================
Nama    	: Achmad Khusnul Yakin
NIM    		: 202557201001
Mata Kuliah : Praktikum Struktur Data
Aplikasi 	: Antrian Servis Laptop
Metode   	: Queue (FIFO)
===========================================================
*/

#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

queue<string> antrian;

void tambahAntrian() {
    string nama;

    cin.ignore();

    cout << "\nMasukkan Nama Pelanggan : ";
    getline(cin, nama);

    antrian.push(nama);

    cout << "\n====================================";
    cout << "\nPelanggan berhasil masuk antrian.";
    cout << "\n====================================\n";
}

void layaniPelanggan() {

    if (antrian.empty()) {
        cout << "\n====================================";
        cout << "\nAntrian masih kosong!";
        cout << "\n====================================\n";
    } else {
        cout << "\n====================================";
        cout << "\nSedang melayani : " << antrian.front();
        cout << "\n====================================\n";
        antrian.pop();
    }

}

void tampilAntrian() {

    if (antrian.empty()) {
        cout << "\n====================================";
        cout << "\nTidak ada pelanggan dalam antrian.";
        cout << "\n====================================\n";
        return;
    }

    queue<string> temp = antrian;

    cout << "\n========== DAFTAR ANTRIAN ==========\n";

    int nomor = 1;

    while (!temp.empty()) {

        cout << nomor << ". " << temp.front() << endl;
        temp.pop();
        nomor++;

    }

    cout << "====================================\n";
}

void pelangganDepan() {

    if (antrian.empty()) {
        cout << "\nAntrian kosong.\n";
    } else {
        cout << "\nPelanggan pertama : " << antrian.front() << endl;
    }

}

void jumlahAntrian() {

    cout << "\nJumlah pelanggan dalam antrian : "
         << antrian.size() << endl;

}

int main() {

    int pilih;

    do {

        cout << "\n============================================";
        cout << "\n      APLIKASI ANTRIAN SERVIS LAPTOP";
        cout << "\n============================================";
        cout << "\n1. Tambah Antrian";
        cout << "\n2. Layani Pelanggan";
        cout << "\n3. Tampilkan Antrian";
        cout << "\n4. Lihat Antrian Terdepan";
        cout << "\n5. Jumlah Antrian";
        cout << "\n6. Keluar";
        cout << "\n============================================";
        cout << "\nPilih Menu : ";
        cin >> pilih;
        system("cls");
        switch (pilih) {

        case 1:
            tambahAntrian();
            system("pause");
			system("cls");
            break;

        case 2:
            layaniPelanggan();
            system("pause");
			system("cls");
            break;

        case 3:
            tampilAntrian();
            system("pause");
			system("cls");
            break;

        case 4:
            pelangganDepan();
            system("pause");
			system("cls");
            break;

        case 5:
            jumlahAntrian();
            system("pause");
			system("cls");
            break;

        case 6:
            cout << "\n============================================";
            cout << "\nTerima kasih telah menggunakan aplikasi.";
            cout << "\n============================================\n";
            break;

        default:
            cout << "\nMenu tidak tersedia!\n";
            system("pause");
			system("cls");

        }

    } while (pilih != 6);

    return 0;
}
