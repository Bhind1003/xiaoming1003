#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a[100005], x, l, r, index;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> x >> l >> r;
        if (x == 1) {
            index = l;
            for (int j = l + 1; j <= r; j++) {
                if (a[j] > a[index]) {
                    index = j;
                }
            }
            printf("%d %d\n", index, a[index]);
        } else {
            a[l] = r;
        }
    }
    return 0;
}
/*
5 6
1 2 3 4 5
1 1 5
0 3 6
1 3 4
1 4 5
0 2 9
1 1 5

*/