#include <bits/stdc++.h>

using namespace std;
typedef struct node {
    int begin;
    int end;
} node;

bool cmp(node a, node b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;
    node a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i].begin >> a[i].end;
    }
    sort(a, a + n, cmp);
//    for (int i = 0; i < n; ++i) {
//        cout << a[i].begin << " " << a[i].end << endl;
//    }
    int cnt = 1,k=0;
    for (int i = 1; i < n ; ++i) {
        if (a[k].end < a[i].begin) {
            k=i;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
/*
5
6 8
1 5
0 2
2 3
0 1
*/