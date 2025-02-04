#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    
    if ((n * (n + 1) / 2) & 1) {
        cout << "NO";
        return 0;
    }

    cout << "YES\n";
    vector<int> ve1, ve2;
    ll sum = 0, target = (n * (n + 1)) / 4;

    for (int i = n; i > 0; i--) {
        if (sum + i <= target) {
            sum += i;
            ve1.push_back(i);
        } else {
            ve2.push_back(i);
        }
    }

    cout << ve1.size() << "\n";
    for (int i : ve1) {
        cout << i << " ";
    }
    cout << "\n" << ve2.size() << "\n";
    for (int i : ve2) {
        cout << i << " ";
    }
}