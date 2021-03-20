#include <bits/stdc++.h>

using namespace std;
map<int, int> myMap;
map<int, int>::iterator temp;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        myMap[a] = b;
        myMap[b] = a;
    }
    int m;
    cin >> m;
    int data[m + 14], temp[m + 14];
    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        cin >> temp[i];
    }
    for (int i = 0; i < m; ++i) {
        if (!myMap[temp[i]]) {
            data[cnt++] = temp[i];
        } else {
            int flag = 1;
            for (int j = 0; j < m; ++j) {
                if (myMap[temp[i]] == temp[j]) {
                    flag = 0;
                }
            }
            if (flag) {
                data[cnt++] = temp[i];
            }
        }
    }
    sort(data, data + cnt);
    cout << cnt << endl;
    for (int i = 0; i < cnt; ++i) {
        cout << data[i];
        if (i != cnt - 1)cout << " ";
    }
    return 0;
}
/*
3
11111 22222
33333 44444
55555 66666
7
55555 44444 10000 88888 22222 11111 23333
*/