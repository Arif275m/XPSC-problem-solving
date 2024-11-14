 #include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
     string S;
      cin >> S;
     int l=0,r=0;
      for (int i = 0; i < k; i++)
      {
        if(S[i]=='B')l++;
        else r++;
        
      }
      int ans=r;
          for (int i = 0; i+k < n; i++)
      {
        if(S[i]=='B')l--;
        else r--;
         if(S[i+k]=='B')l++;
         else r++;
         ans=min(ans,r);
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
