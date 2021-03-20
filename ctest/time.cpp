#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, k, count = 0;
    cin >> n;
    unordered_map<string, int> hash;
    vector<string> out;
    for (i = 0; i < n; i++) {
        string c1, c2;
        cin >> c1 >> c2;
        hash[c1]++;
        hash[c2]++;
        k = hash[c1] > hash[c2] ? hash[c1] : hash[c2];
    }
    unordered_map<string, int>::iterator iter;
    iter = hash.begin();
    while (iter != hash.end()) {
        if (k == iter->second) {
            out.push_back(iter->first);
            count++;
        }
        iter++;
    }
    if (count == 1) {
        for (auto x:out)
            cout << x << " " << k;
    } else {
        sort(out.begin(), out.end());
        cout << out[0] << " " << k << " " << count;
    }
    return 0;
}

/*
4
13005711862 13588625832
13505711862 13088625832
13588625832 18087925832
15005713862 13588625832

*/