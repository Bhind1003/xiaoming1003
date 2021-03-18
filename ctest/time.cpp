#include <bits/stdc++.h>

#define max 113
using namespace std;
struct node {
    string name;
    int n;
};

bool cmp(struct node a, struct node b) {
    return a.name < b.name;
}

int main() {
    int n;
    cin >> n;
    basic_string<char> name[n];
    for (int i = 0; i < n; ++i) {
        cin >> name[i];
    }
    int tn;
    cin >> tn;
    struct node arr[tn];
    double sum = 0.0;
    for (int i = 0; i < tn; ++i) {
        cin >> arr[i].name >> arr[i].n;
        sum += arr[i].n;
    }
    sum /= tn;
    int flag = 1;
    sort(arr, arr + tn, cmp);
    for (int i = 0; i < tn; ++i) {
        if (arr[i].n > sum) {
            int jg = 1;
            for (int j = 0; j < n; ++j) {
                if (arr[i].name == name[j]) {
                    jg = 0;
                }
            }
            if (jg){
                flag = 0;
                cout << arr[i].name << endl;
            }
        }
    }
    if (flag)cout << "Bing Mei You" << endl;
    return 0;
}
/*
10 GAO3 Magi Zha1 Sen1 Quan FaMK LSum Eins FatM LLao
8
Magi 50
Pota 30
LLao 3
Ammy 48
Dave 15
GAO3 31
Zoro 1
Cath 60
*/