// https://codeforces.com/group/JIlKwR3tn5/contest/556981/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sf = 0, fs = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'S' and s[i + 1] == 'F') sf++;
        else if (s[i] == 'F' and s[i + 1] == 'S') fs++;
    }
    if (sf > fs) cout << "YES";
    else cout << "NO";
    return 0;
}