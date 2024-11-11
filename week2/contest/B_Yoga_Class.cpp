 #include <iostream>
using namespace std;
void solve(void){
      int n, x, y;
        cin >> n >> x >> y;
        int  ans1 = n * x;
        int ans2 = (n / 2) * y + (n % 2) * x;
        cout << max( ans1, ans2) << '\n';
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
