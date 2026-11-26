#include <iostream>
#include <string>
#include <windows.h> // 1. Tambahkan header windows
using namespace std;
int main() {
    // 2. Set terminal agar membaca output UTF-8
    SetConsoleOutputCP(CP_UTF8);
    
    string menu[5]={"soto","rawon","pecel","es teh","kopi"};
    string ulang;
    int harga[5]={15000,20000,10000,3000,5000};
    int t;
    int porsi[5];
    int total[5];
    int all;

         cout<< "═════════ MENU MAKANAN ═════════"<<endl;
         cout<< "1 ";
         cout<< menu[0]<<endl;
         cout<< "2 ";
         cout<< menu[1]<<endl;
         cout<< "3 ";
         cout<< menu[2]<<endl;
         cout<< "═════════ MENU MINUMAN ═════════"<<endl;
         cout<<"4 ";
         cout<< menu[3]<<endl;
         cout<<"5 ";
         cout<< menu[4]<<endl<<endl<<endl;
     
        do {
            for (i = 0; i < 5; i++) {
       cout<< "◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼"<<endl;
       cout<< "Menu ";
       cout<< menu[i]<<endl;
       cout<<"Harga ";
       cout<< harga[i]<<endl;
       cout<<"Masukkan Porsi ";
       cin>> porsi[i];
       total[i]=harga[i]*porsi[i];
       cout<< "Totalnya: ";
       cout<< total[i]<<endl;
        
     
       // Bagian yang ditambahkan
       all = total[0] + total[1] + total[2] + total[3] + total[4];
       cout<< "═════════ DETAIL PESANAN ═════════"<<endl;
       cout<< "Total Keseluruhan: ";
       cout<< all<<endl;
       cout<< "══════════════════════════════════"<<endl;

       cout<< "Apakah Anda Mau Pesan Lagi Tekan y/Y: ";
       cin>> ulang;
            }
        }
               while(ulang=="y" || ulang=="Y" );
    
     system("pause");
    return 0;
    
    
}

Yang dibagian dalam do itu kan panjang ya apakah bisa itu lebih dipersingkat
