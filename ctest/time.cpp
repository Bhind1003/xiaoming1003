#include <bits/stdc++.h>

using namespace std;
map<string, int> my;
map<string, int>::iterator temp;

void fun(const string &a) {
    if (my[a])
        my[a]++;
    else my[a] = 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;
        fun(a), fun(b);
//        cout << my[a] << " " << my[b] << endl;
    }
    int max = 0, cnt = 0;
    string maxName;
    for (temp = my.begin(); temp != my.end(); temp++) {
        if (max < temp->second) {
            max = temp->second;
            maxName = temp->first;
        } else if (max == temp->second) {
            if (maxName > temp->first) {
                maxName = temp->first;
                cnt++;
            }
        }
    }
    cout << maxName << " " << max;
    if (cnt > 0)cout << " " << cnt;
    return 0;
}
/*
4
13005711862 13588625832
13505711862 13088625832
13588625832 18087925832
15005713862 13588625832

*/