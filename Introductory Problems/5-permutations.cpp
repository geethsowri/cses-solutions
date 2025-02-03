#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef vector<int> vi;
int main() {
    ll n;
    cin >> n;
    if(n == 1) {
	cout << 1;
    } else if(n <= 3) {
        cout << "NO SOLUTION";
    } else {
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) cout << i << " ";
        }
        for(int i = 1; i <= n; i++) {
            if(i & 1) cout << i << " ";
        }
    }
}
