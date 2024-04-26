#include <iostream>
#include <math.h>

using namespace std;

int main() {
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
