 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
    int a,b, t;
    cin >> a >> b >> t;
    int max = t ;
    int multi = floor(max / a);
    int ans = multi * b;
    cout << ans << endl;


 return 0;   
}
 