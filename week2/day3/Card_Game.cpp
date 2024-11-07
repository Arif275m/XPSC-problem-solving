 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  int ans=0;
  while(t--){
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        if(i!=x){
              
            if((x+i)%2==0){
             ans++;
            }
        }
        
    }
    cout<<ans<<endl;
    ans=0;
  }
  

 return 0;   
}
 