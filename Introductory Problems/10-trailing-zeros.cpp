#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long cur = 5;
    long long res = 0;
    while(cur <= n) {
        res += (n / cur);
        cur *= 5;
    }
    cout << res;
    return 0;
}