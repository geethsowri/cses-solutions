#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin >> n;
    vector<ll> ve(n-1);
    ll sum = 0;
    for(ll i = 0; i < n-1; i++) {
        cin >> ve[i];
        sum += ve[i];
    }
    ll totsum = (n*(n+1))/2;
    cout << totsum - sum;
}