 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  int n;
  cin>>n;
  map<int,int>mp;
  int ans=0;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    mp[a]++;
    ans=max(ans,mp[a]);
  }
 cout<<ans; 

 return 0;   
}
 