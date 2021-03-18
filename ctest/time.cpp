#include <bits/stdc++.h>

#define max 113
using namespace std;
struct node {
    char name[14];
    int n;
};
bool cmp(struct node){

}
int main() {
    int n;
    cin >> n;
    char name[n][14];
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
    cout << "Bing Mei You" << endl;
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