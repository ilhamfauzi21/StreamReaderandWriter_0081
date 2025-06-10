#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string baris;
    string namaFile;

    cout << "Masukan nama file: ";
    cin >> namaFile;

    //Membuka file dalam mode menulis
    ofstream outFile;
    outFile.open(namaFile + ".txt", ios::out);
    cout << ">= Menulis File, \'q' untuk keluar " << endl;

    while (true)
    {
        cout << "-";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika pengguna memasukan nilai dari 'baris' 
    }
    //Menulis baris ke file
    outFile << baris << endl;
}