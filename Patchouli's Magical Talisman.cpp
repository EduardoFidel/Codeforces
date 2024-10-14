// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/G

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        int odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2) odd++;
        }
        if (odd) cout << n - odd;
        else {
            vector<int> power(n);
            for (int i = 0; i < n; i++) {
                int x = a[i];
                while (x % 2 == 0) {
                    x /= 2;
                    power[i]++;
                }
            }
            cout << *min_element(power.begin(), power.end()) + n - 1;
        }
        cout << '\n';
    }
    return 0;
}