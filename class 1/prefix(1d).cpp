#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+100;

int a[N], pref[N];

int main() {

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
        pref[i] = pref[i-1] + a[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r; // a[l]+a[l+1]+...+a[r]
        cout << pref[r] - pref[l-1] << "\n";
    }
    return 0;
}

