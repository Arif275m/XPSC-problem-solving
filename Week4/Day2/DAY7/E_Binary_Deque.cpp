#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
 long long int n, s;
    cin >> n >> s;
    vector< int> v(n);
      long long int total = 0;
    for (  int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    if (total < s)
    {
        cout << "-1" << endl;
        return;
    }
    long long  int cnt = 0, l = 0, r = 0, sum = 0;

    while (r < n)
    {
        sum += v[r];
        if (sum == s)
        {
             
            cnt = max(cnt, r - l + 1);
        }
        else if (sum > s)
        {
            while (sum > s && l < r)
            {
                sum -= v[l];
                l++;
            }
        }
        r++;
    }

      long long int ans = n - cnt;
    cout << ans << endl;
}

 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}