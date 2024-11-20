 #include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> an(n);
    vector<int> bm(m);

    for (int i = 0; i < n; i++) {
        cin >> an[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> bm[i];
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        int x = bm[i];
        if (an[x - 1] > 0) {
            an[x - 1]--;
        } else {
            ans++;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
