#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    // Membuka file dalam mode menulis
    ofstream outfile;
    // Menunjuk ke sebuah nama file
    outfile.open("data.txt");

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika ada memasukkan karakter q
        if (baris == "q")
            break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl; // menulis ke file
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close(); // menutup file
    // Membuka file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah nama file
    infile.open("contohfile.txt");
    cout << endl
         << ">= Membukan dan Membaca File" << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan disini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else
        cout << "File tidak ditemukan!" << endl;
    return 0;
}