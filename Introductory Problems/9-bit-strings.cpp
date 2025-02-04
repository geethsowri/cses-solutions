#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main() {
    ll n;
    cin >> n;
    ll res = 1;
    for (int i = 0; i < n; i++) {
        res = (res * 2) % MOD;
    }
    cout << res;
}