#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    string s;
    cin >> s;
    ll maxi = 1, cur = 1;
    for (ll i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            cur++;
        } else {
            maxi = max(cur, maxi);
            cur = 1;
        }
    }
    maxi = max(cur, maxi); 
    cout << maxi;
}