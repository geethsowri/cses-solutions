#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
int main() {
    ll n;
    cin >> n;
    vi ve(n);
    for(int i = 0; i < n; i++) {
        cin >> ve[i];
    }
    ll res = 0;
    for(int i = 0; i < n - 1; i++) {
        if(ve[i] > ve[i + 1]) {
            res += (ve[i] - ve[i + 1]);
            ve[i + 1] += (ve[i] - ve[i + 1]);
        }
    }
    cout << res;
}