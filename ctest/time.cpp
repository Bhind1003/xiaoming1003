#include <bits/stdc++.h>

#define maxn 113
using namespace std;
int dp[maxn][maxn], path[maxn][maxn], a[maxn][maxn];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int j = 1; j <= m; j++)//第一行
    {
        dp[1][j] = dp[1][j - 1] + a[1][j];
        path[1][j] = 1;
    }
    for (int i = 1; i <= n; i++)//第一列
    {
        dp[i][1] = dp[i - 1][1] + a[i][1];
        path[i][1] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            if (dp[i - 1][j] < dp[i][j - 1])//上<左
            {
                dp[i][j] = dp[i][j - 1] + a[i][j];
                path[i][j] = path[i][j - 1];
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                dp[i][j] = dp[i - 1][j] + a[i][j];
                path[i][j] = path[i - 1][j];
            } else//两者值相同
            {
                dp[i][j] = dp[i - 1][j] + a[i][j];
                path[i][j] = path[i - 1][j] + path[i][j - 1];
            }
        }
    }
    cout << dp[n][m] << " " << path[n][m];
    return 0;
}
/*
4  5
2  -1  6  -2  9
-3  2  5  -5  1
5   8  3  -2  4
5   2  8  -4  7
*/