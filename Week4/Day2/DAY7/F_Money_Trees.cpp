#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long int n, s;
    cin >> n >> s;
    vector<long long int> v(n);
    vector<long long  int> h(n);

    for (long long   int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (long long   int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    long long   int l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        if (r != 0 && h[r - 1] % h[r] != 0)
        {
             
            l = r;
            sum = 0;
        }
        sum += v[r];

        if (sum <= s)
        { 
            ans = max(ans, r - l + 1);
        }
        else
        {
            while (l <= r && sum > s)
            {
                sum -= v[l];
                l++;
            }
        }

        r++;
    }

    cout << ans << endl;
}

  int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}