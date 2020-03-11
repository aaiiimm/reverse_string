/*
program reverse string
*/

#include <iostream>
using namespace std;
int main() {
    string nama;
    cout << "Masukkan nama: ";
    getline(cin, nama); // getline => input string saja, cin => standar input, nama => variabel yang akan menampung inputannya
    //string hasil; // immutable (ga bisa dirubah isinya)
    char hasil[100] = "";
    int panjang_nama = nama.length();

    for(int i = 0; i < panjang_nama; i++) {
        hasil[i] = nama[panjang_nama-i-1];
    }
    cout << hasil << endl;
    return 0;
}
