// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> p(n+1), ans(n+1);
    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++) {
        vector<bool> vis(n+1);
        int j = i;
        while (!vis[j]) {
            vis[j] = true;
            j = p[j];
        }
        ans[i] = j;
    }
    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
    return 0;
}