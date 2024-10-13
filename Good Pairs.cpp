// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, a, min = INT_MAX, max=INT_MIN, min_pos, max_pos;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            if (a < min) {
                min = a;
                min_pos = i;
            }
            if (a > max) {
                max = a;
                max_pos = i;
            }
        }
        cout << min_pos << " " << max_pos << '\n';
    }
    return 0;
}