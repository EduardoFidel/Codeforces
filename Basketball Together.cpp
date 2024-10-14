// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/F

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, d;
    cin >> n >> d;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    sort(p.begin(), p.end());
    int ans = 0;
    while (n > 0) {
        int max = p.back();
        p.pop_back();
        int div = d / max + 1;
        if (div > n) break;
        n -= div;
        ans++;
    }
    cout << ans;
    return 0;
}