#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int pro = a[0], max = 0;
    for (int i = 1; i < n; ++i) {
        if (pro < 0)pro = 0;
        pro += a[i];
        if (max < pro)
            max = pro;
    }
    cout << max;
    return 0;
}
/*
5
-2 11 -4 13 -5 -2

*/