#include <bits/stdc++.h>
using namespace std;

const int N = 2005;

int a[N][N], pref[N][N];

int main() {

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    // precal
    for(int x = 1; x <= n; x++) {
        for(int y = 1; y <= m; y++) {
            pref[x][y] = a[x][y] + pref[x][y-1] + pref[x-1][y] - pref[x-1][y-1];
        }
    }

    int q;
    cin >> q;
    while(q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1];
        cout << sum << "\n";
    }
    return 0;
}

