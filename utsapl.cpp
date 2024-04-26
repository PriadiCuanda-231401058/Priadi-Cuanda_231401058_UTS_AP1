#include <iostream>
// #include <iomanip>
#include <math.h>
// #include <string>

using namespace std;

int main() {
// 1. 
    // int detik, jam, menit, sisa;
    // cout << "Masukkan waktu dalam detik: ";
    // cin >> detik;

    // if (detik < 0) {
    //     cout << "Input tidak boleh negatif." << endl;
    // } else {
    //     jam = detik / 3600;
    //     sisa = detik % 3600;
    //     menit = sisa / 60;
    //     sisa = sisa % 60;

    //     cout << setw(2) << setfill('0') << jam << ":"
    //          << setw(2) << setfill('0') << menit << ":"
    //          << setw(2) << setfill('0') << sisa << endl;
    // }


// 2. 
    // string kalimat;
    // cout << "Masukkan kalimat: ";
    // getline(cin, kalimat); 

    // for (int i = 0; i < kalimat.length(); i++) {
    //      kalimat[i] = toupper(kalimat[i]);
    // }

    // cout << "Kalimat dalam huruf kapital: " << kalimat << endl;

// 3.
    // int bil, sisa,d;
    // int tot = 0;
    // string cbil,p;
    // cout << "Masukkan bil: ";
    // cin >> bil;
    // d=1;
    // cbil = to_string(bil);
    // int a = bil;
    // while(a>10 ){
    //     a = a / 10;
    //     d++;
    //     }
    // for (int i = 0; i < d; i++) {
    //     p = cbil[i];
    //     int x = stoi (p);
    //     if (x == 2 || x == 3 || x == 5 || x == 7) {
    //         tot += x;
    //     }
    // }

    // cout << "Jumlah angka prima dalam bilangan yang dimasukkan: " << tot << endl;

    // 4. 
    system("CLS");
    int n;
    bool cek = true;
    cout << "Masukkan sebuah angka: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cek = false;
                break;
            }
        }
        if (cek) {
            cout << n << " merupakan bilangan prima.";
        } else {
            cout << n << " bukanlah bilangan prima.";
        }
    }
    return 0;
}




