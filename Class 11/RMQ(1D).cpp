#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 100, LOG = 20;

int rmq[N][LOG];
int n, a[N];
int lg[N];

void preprocess() {
    for(int i = 1; i <= n; i++) rmq[i][0] = a[i];
    for(int j = 1; j < LOG; j++)
        for(int i = 1; i+(1<<j)-1 <= n; i++)
            rmq[i][j] = max(rmq[i][j-1],rmq[i+(1<<(j-1))][j-1]);
    for(int i = 2; i < N; i++) lg[i] = lg[i/2] + 1;
}

int query(int i, int j) {
    int k = lg[j-i+1];
    return max(rmq[i][k],rmq[j-(1<<k)+1][k]);
}
