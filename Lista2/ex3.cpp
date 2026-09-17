#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; // n
    }
    int maior = a[0] + a[1];
    for (int i = 1; i < n - 1; ++i) {
        if (maior <= a[i] + a[i + 1]) maior = a[i] + a[i + 1]; // n - 1
    }
    cout << maior << endl;
    return 0;
}

//ex3(x) = O(n)