// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/H

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int maxim = max(a, b), minim = min(a, b);
    for (int i = 0; i <= c / maxim; i++) {
        if ((c - i * maxim) % minim == 0) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}