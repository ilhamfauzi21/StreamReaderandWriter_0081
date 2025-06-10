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
        //mendapatkan setiap karakter 
    }
    
}