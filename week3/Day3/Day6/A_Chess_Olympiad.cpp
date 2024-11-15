#include <bits/stdc++.h>
using namespace std;

 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float  x, y, z;
    cin >> x >> y >> z;
    if (x + y * 0.5 + (4 - (x + y + z)) > 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}