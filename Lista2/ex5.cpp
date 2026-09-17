#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) { // n
        cin >> a[i];
    }
    cin >> s;

    string soma = "N";

    for(int i = 0; i < n; ++i) { // n
        if (soma == "N") {
            for(int i2 = 1; i2 < n; ++i2) { // n²
                if (a[i] + a[i2] == s) {
                    soma = "S";
                    break;
                }
            }
        } else break;
    }

    cout << soma << endl;;
    return 0;
} // ex5(x) = O(n²)