#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 100;

int D[N], a[N];

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        D[l]++, D[r+1]--;
    }

    for(int i = 1; i <= n; i++) {
        a[i] = a[i-1] + D[i];
    }

    return 0;
}

