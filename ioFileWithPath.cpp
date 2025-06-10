#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string baris;
    string NamaFile;

    cout << "Masukkan nama file: ";
    cin >> NamaFile;

    // Membuka file dalam mode menulis
    ofstream outFile;
    // Menunjuk ke sebuah nama file
    outFile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis File, \'q' untuk keluar" << endl;
    // unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika pengguna memasukkan 'q'
        if (baris == "q")
        {
            break; // Menulis dan memasukkan nilai dari 'baris' ke file
        }

        