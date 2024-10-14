// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/I

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    float a, b, min_cost=1000000000;
    while (n--) {
        cin >> a >> b;
        min_cost = min(min_cost, a / b);
    }
    cout << fixed << setprecision(8) << min_cost * m;
    return 0;
}