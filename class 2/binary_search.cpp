#include <bits/stdc++.h>
using namespace std;


int main() {
    // type - 1
    int lo = 0, hi = 1e9; // appropriate limits
    while(hi > lo) {
        int mid = (hi+lo)/2;
        if(ok(mid)) hi = mid;
        else lo = mid+1;
    }

    // type - 2
    while(hi > lo) {
        int mid = (lo+hi+1)/2;
        if(ok(mid)) lo = mid;
        else hi = mid-1;
    }


    return 0;
}

