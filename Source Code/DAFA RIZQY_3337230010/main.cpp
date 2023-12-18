#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void hitungPanjangString() {
    string str1;
    cout << "Masukkan string: ";
    cin.ignore(); // Membersihkan newline dari buffer
    getline(cin, str1);//BIUAR BISA SPASI
    cout << "Panjang string: " << str1.length() << endl;
    getch();//fungsi untuk menahan menui
    system("CLS");//fungsui untuk menghapsu cout di terminal
}

void gabungString() {
    string str1, str2;
    cout << "Masukkan string pertama: ";
    getline(cin, str1);
    cout << "Masukkan string kedua: ";
    getline(cin, str2);
    cout << "Hasil penggabungan: " << str1 + str2 << endl;
    getch();
    system("CLS");
}
void err() {
    cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
    getch();
    system("CLS");
}
void array1dimensi(){
// Pendeklarasian array satu dimensi dengan 5 elemen bertipe int
    const int jumlah_elemen = 5;
    int arraySatuDimensi[jumlah_elemen];

    // Inisialisasi array satu dimensi
    cout << "Masukkan " << jumlah_elemen << " angka untuk array: " << endl;
    for (int i = 0; i < jumlah_elemen; ++i) {
        cout << "Elemen ke-" << i << ": ";
        cin >> arraySatuDimensi[i];
    }

    // Menampilkan isi array satu dimensi
    cout << "Isi dari array: ";
    for (int i = 0; i < jumlah_elemen; ++i) {
        cout << arraySatuDimensi[i] << " ";
    }
    cout << endl;
    getch();
    system("CLS");}

void array2dimensi(){
    // Pendeklarasian array dua dimensi dengan ukuran 3x3 bertipe int
    const int baris = 3;
    const int kolom = 3;
    int arrayDuaDimensi[baris][kolom];

    // Inisialisasi array dua dimensi
    cout << "Masukkan elemen untuk array 2D (" << baris << "x" << kolom << "):" << endl;
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cout << "Elemen ke-[" << i << "][" << j << "]: ";
            cin >> arrayDuaDimensi[i][j];
        }
    }

    // Menampilkan isi array dua dimensi
    cout << "Isi dari array 2D:" << endl;
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            cout << arrayDuaDimensi[i][j] << " ";
        }
        cout << endl;
    }
    getch();
    system("CLS");
}
void array3dimensi(){
    int arrayTigaDimensi[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Menampilkan isi dari array tiga dimensi
    cout << "Isi dari array 3D:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                cout << arrayTigaDimensi[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    getch();
    system("CLS");
}
void menu(){
 int choice;
    string nama, nim;
    cout << "=== Halaman Login ===" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "| Masukan Nama dan Nim Kamu             |" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Nama: ";
    getline(cin, nama);

    cout << "NIM: ";
    getline(cin, nim);
    system("CLS");

    while (true) {
        cout << "=== Selamat Datang : "  << nama << " || " << "Nim : " << nim << " ===" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "|     Menu UAS                          |" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "|1. Menu Panjang String                 |" << endl;
        cout << "|2. Menggabungkan String                |" << endl;
        cout << "|3. Array 1 Dimensi                     |" << endl;
        cout << "|4. Array 2 Dimensi                     |" << endl;
        cout << "|5. Array 3 Dimensi                     |" << endl;
        cout << "|6. Exit                                |" << endl;
        cout << "-----------------------------------------" << endl;
        cout << endl;
        cout << "[South East Asia Region Bank, Powered By : Dafa Rizqy 3337230010]" << endl;
        cout << endl;

        cout << "================================" << endl;
        cout << "Masukkan Menu (1-5) : ";
        cout << "================================" << endl;
        cin >> choice;
        cin.ignore();
        system("CLS");

        if (choice == 1) {
            hitungPanjangString();
        } else if (choice == 2) {
            gabungString();
        } else if (choice == 3) {
            array1dimensi();
        } else if (choice == 4) {
            array2dimensi();
        } else if (choice == 5) {
            array3dimensi();
        } else if (choice == 6) {
            cout << "Terima kasih!" << endl;
            break;
        }else {
            err();
        }
    }
}

int main(){
menu();//untuk memanggil void yangh di atas
return 0;
}
