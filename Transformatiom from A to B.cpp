// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int x = b;
    vector<int> ans;
    ans.push_back(x);
    while (x > a and (x % 2 == 0 or x % 10 == 1)) {
        if (x % 2 == 0) x /= 2;
        else x /= 10;
        ans.push_back(x);
    }
    if (x == a) {
        cout << "YES\n";
        cout << ans.size() << '\n';
        reverse(ans.begin(), ans.end());
        for (int i : ans) cout << i << ' ';
    } else cout << "NO";
    return 0;
}