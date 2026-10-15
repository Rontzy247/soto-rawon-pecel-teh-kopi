// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <string>
#include <windows.h> // 1. Tambahkan header windows
using namespace std;
int main() {
    // Write C++ code here
    // 2. Set terminal agar membaca output UTF-8
    SetConsoleOutputCP(CP_UTF8);
    string menu[5]={"soto","rawon","pecel","es teh","kopi"};
    string ulang;
    int harga[5]={15000,20000,10000,3000,5000};
    int t;
    int porsi[5];
    int total[5];
    int all;

     for (t=0; t<1; t++) {
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
     }
     
        do {
       cout<< "◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼"<<endl;
       cout<< "Menu ";
       cout<< menu[0]<<endl;
       cout<<"Harga ";
       cout<< harga[0]<<endl;
       cout<<"Masukkan Porsi ";
       cin>> porsi[0];
       total[0]=harga[0]*porsi[0];
       cout<< "Totalnya: ";
       cout<< total[0]<<endl;
       cout<< "◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼"<<endl;
       cout<< "Menu ";
       cout<< menu[1]<<endl;
       cout<<"Harga ";
       cout<< harga[1]<<endl;
       cout<<"Masukkan Porsi ";
       cin>> porsi[1];
       total[1]=harga[1]*porsi[1];
       cout<< "Totalnya: ";
       cout<< total[1]<<endl;
       cout<<"◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼"<<endl;
        cout<< "Menu ";
       cout<< menu[2]<<endl;
       cout<<"Harga ";
       cout<< harga[2]<<endl;
       cout<<"Masukkan Porsi ";
       cin>> porsi[2];
       total[2]=harga[2]*porsi[2];
       cout<< "Totalnya: ";
       cout<< total[2]<<endl;
       cout<< "◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼"<<endl;
       cout<< "═════════ 𝗠𝗘𝗡𝗨 𝗠𝗜𝗡𝗨𝗠𝗔𝗡 ═════════"<<endl;
       cout<< "Menu ";
       cout<< menu[3]<<endl;
       cout<<"Harga ";
       cout<< harga[3]<<endl;
       cout<<"Masukkan Porsi ";
       cin>> porsi[3];
       total[3]=harga[3]*porsi[3];
       cout<< "Totalnya: ";
       cout<< total[3]<<endl;
        cout<<"◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼◻◼"<<endl;
       cout<< "Menu ";
       cout<< menu[4]<<endl;
       cout<<"Harga ";
       cout<< harga[4]<<endl;
       cout<<"Masukkan Porsi ";
       cin>> porsi[4];
       total[4]=harga[4]*porsi[4];
       cout<< "Totalnya: ";
       cout<< total[4]<<endl;
       cout<< "Apakah Anda Mau Pesan Lagi Tekan b/B: ";
       cin>> ulang;
        }
               while(ulang=="belilagi" || ulang=="BELILAGI" );
               system("pause");
        
         
       
    

    return 0;
    
    
}
