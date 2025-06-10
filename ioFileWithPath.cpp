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

        // Menulis baris ke file
        outFile << baris << endl;
        outFile.close();
        ifstream inFile;
        inFile.open(NamaFile, ios::in);
        cout << endl
             << "Membukan dan membaca file " << endl;
        // Melakukan perulangan setiap baris
        if (inFile.is_open())
        {
            while (getline(inFile, baris))
            {
                cout << baris << '\n'; // Menampilkan isi file
            }
            // Menutup file setelah selesai membaca
            inFile.close();
        }
        // jika tidak diyemukan file maka akan menampilkan ini
        else
            cout << "Tidak dapat membuka file.";
        return 0;
    }