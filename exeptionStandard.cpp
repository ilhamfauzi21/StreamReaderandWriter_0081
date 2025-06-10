#include <iostream>
#include <exception>
// untuk obyek exception yang akan digunakan
#include <array>
// untuk obyek array yang akan digunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try
    {
        array<int, 3> data = {10, 20, 30};
        // pesan array integer 3 elemen
        cout << data.at(5) << endl;
        // memanggil elemen ke-5
    }
    catch (exception &e)
    {
        // menangkap menggunakan obyek exception
        cout << e.what() << endl;
        //*akan dieksekusi jika terjadi exception
    }
    cout << "Baris Program yang terakhir" << endl;
    return 0;
}