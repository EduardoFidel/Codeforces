// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, k;
    cin >> t;
    ll w, h, x, y, x_dif_1, x_dif_2, y_dif_1, y_dif_2;
    while(t--) {
        cin >> w >> h;
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> x;
            if (i == 0) x_dif_1 = -x;
            if (i == k-1) x_dif_1 += x;
        }
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> x;
            if (i == 0) x_dif_2 = -x;
            if (i == k-1) x_dif_2 += x;
        }
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> y;
            if (i == 0) y_dif_1 = -y;
            if (i == k-1) y_dif_1 += y;
        }
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> y;
            if (i == 0) y_dif_2 = -y;
            if (i == k-1) y_dif_2 += y;
        }
        ll ans = max( max(x_dif_1, x_dif_2) * h , max(y_dif_1, y_dif_2) * w );
        cout << ans << '\n';
    }
    return 0;
}