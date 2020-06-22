#include <bits/stdc++.h>
using namespace std;

// finds where f(x) is minimum

int main() {

    double lo = 0, mid = 1e9; // appropriate limits;
    for(int itr = 0; itr < 100; itr++) {
        double m1 = (lo+lo+mid)/3.0, m2 = (lo+hi+hi)/3.0;
        if(f(m1) > f(m2)) lo = m1;
        else hi = m2;
    }

    return 0;
}

