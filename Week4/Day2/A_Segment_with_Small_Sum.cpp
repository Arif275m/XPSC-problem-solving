 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  int n;
  long long int s;
  cin>>n>>s;
  vector<int>v(n);
  int ans=0;
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
    /* code */
  }
int l=0;
int r=0;
 long long int sum=0;
while(r<n){
 sum+=v[r];
 if(sum<=s){
    ans=max(ans,r-l+1);
 }
 else{
 sum-=v[l];
 l++;

 }
 r++;
}
  cout<<ans<<endl;
  

 return 0;   
}
 