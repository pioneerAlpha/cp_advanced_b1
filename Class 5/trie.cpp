#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 100;

int tot_node = 1;
int to[N][26];

int add(string &s) {
    int cur = 1; // root node
    for(int i = 0; i < s.size(); i++) {
        int c = s[i]-'a';
        if(!to[cur][c]) to[cur][c] = ++tot_node;
        cur = to[cur][c];
    }
    return cur; // leaf node where this string ends
}

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}
