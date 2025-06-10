#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "selamat Belajar di Prodi TI UMY" << endl; // penenda 1: awal program 
        throw 0,5;
        cout << "Pengecualian tidak akan dieksekusi" << endl;
    }
    catch (int a)
    {
        /jika integer maka bloc ini akan dieksekusi/
        cout << "Pernyataan akan dieksekusi" << endl; // penanda 2: menangkap exception
    }
   