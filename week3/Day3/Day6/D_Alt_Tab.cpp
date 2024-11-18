#include <bits/stdc++.h>
using namespace std;

 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector<string> v(n);
     map<string, long long int> mp;
    for (  int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    queue<string> q;
    for (auto k : v)
    {
        
        string u;
        long long int l = k.length();
        u = k.substr(l - 2, l);
        mp[k]++;
        if (mp[k] < 2)
        {
            q.push(u);
        }
    }
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }

    return 0;
}