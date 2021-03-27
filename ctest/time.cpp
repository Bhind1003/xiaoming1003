#include <bits/stdc++.h>

using namespace std;

bool fun(int n) {
    if (n <= 2) {
        return true;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int hash2[10010];

int main() {
    int m, n;
    cin >> m >> n;
    int arr[n];
    while (!fun(m)) {
        m++;
    }
//    cout << m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
//        cout<<arr[i]%m;
        if (hash2[arr[i] % m]==0) {
            hash2[arr[i] % m] = arr[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (hash2[arr[i] % m] && hash2[arr[i] % m] == arr[i]) {
            cout << arr[i] % m;
        } else {
            cout << "-";
        }
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
/*
4 4
10 6 4 15

*/