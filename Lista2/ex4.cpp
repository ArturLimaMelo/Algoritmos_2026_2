#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) { // n
        cin >> a[i];
    }
    int sublista = 1;
    int sublistaf = 1;
    for (int i = 0; i < n - 1; ++i) { // n - 1
        if(a[i] <= a[i + 1]) {
            ++sublista;
        }
        else {
            sublista = 1;
        }
        if (sublista > sublistaf) sublistaf = sublista;
    }

    cout << sublistaf << endl;
    return 0;
} // ex4(x) = O(n)