#include <iostream>
using namespace std;

int main()
{
    int angka;
    do
    {
        cout<< "Masukan bil bulat positif: ";
        cin >> angka;

        if (angka<= 0)
        {
            cout<< "Bilanggan harus positiff, coba lagi" << endl;
        }
    } while (angka <=0);;

    cout << "Anda memasukan biangn bulat positif: "<< angka << endl;

    return 0;
    }
