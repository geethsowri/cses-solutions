#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cur = 5;
    int res = 0;
    while(cur <= n) {
        res += (n / cur);
        cur *= 5;
    }
    cout << res;
    return 0;
}