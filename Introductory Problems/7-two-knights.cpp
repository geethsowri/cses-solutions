#include <bits/stdc++.h>
using namespace std;
#define ll ll
int solve(ll n) {
    if(n == 0 || n == 1) {
	cout << "0";
	return 0;
    }
    for(ll i = 1; i <= n; i++) {
        ll res = 0;
        ll sq = i*i;
        ll tot = (sq*(sq-1)) / 2;
        ll def = 2 * (2*(i-1)*(i-2));
        res = tot - def;
        cout << res << "\n";
    }
    return 0;
}
int main() {
    ll n;
    cin >> n;
    solve(n);
    return 0;
}
