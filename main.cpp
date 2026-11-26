#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string menu[5] = {"soto", "rawon", "pecel", "es teh", "kopi"};
    int harga[5] = {15000, 20000, 10000, 3000, 5000};
    int porsi[5];
    int total[5];
    string ulang;

    cout << "═════════ MENU MAKANAN ═════════" << endl;
    cout << "1 " << menu[0] << endl;
    cout << "2 " << menu[1] << endl;
    cout << "3 " << menu[2] << endl;
    cout << "═════════ MENU MINUMAN ═════════" << endl;
    cout << "4 " << menu[3] << endl;
    cout << "5 " << menu[4] << endl << endl << endl;

    do {
        int all = 0;

        for (int i = 0; i < 5; i++) {
            cout << "◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼" << endl;
            cout << "Menu " << menu[i] << endl;
            cout << "Harga " << harga[i] << endl;
            cout << "Masukkan Porsi ";
            cin >> porsi[i];

            total[i] = harga[i] * porsi[i];
            all += total[i];

            cout << "Totalnya: " << total[i] << endl;
        }

        cout << "═════════ DETAIL PESANAN ═════════" << endl;
        cout << "Total Keseluruhan: " << all << endl;
        cout << "══════════════════════════════════" << endl;

        cout << "Apakah Anda Mau Pesan Lagi Tekan y/Y: ";
        cin >> ulang;
    } while (ulang == "y" || ulang == "Y");

    system("pause");
    return 0;
}
