#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int money[1014] = {0}, len[1014] = {0}, dp[1014] = {0};
    for (int i = 0; i < k; ++i) {
        cin >> len[i];
    }
    for (int i = 0; i < k; ++i) {
        cin >> money[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = len[i]; j <= n; ++j) {
            dp[j] = max(dp[j], dp[j - len[i]] + money[i]);
        }
    }

    cout << dp[n];
    return 0;
}
/*
8 10
1 2 3 4 5  6  7  8  9  10
1 5 8 9 10 17 17 20 23 28
*/