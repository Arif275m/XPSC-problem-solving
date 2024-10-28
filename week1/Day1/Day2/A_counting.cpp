 #include <bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int count = 0;
    if (n > m) {
        cout << "0" << endl;
    } else {
        count = m - n + 1;
        cout << count << endl;
    }

    return 0;
}
