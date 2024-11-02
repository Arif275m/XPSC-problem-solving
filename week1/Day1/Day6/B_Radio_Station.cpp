 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  int n,t;
  cin>>n>>t;
 map< string,string>mp ;
  for(int i=0;i<n;i++)
  {
    string a,b;
    cin>>a>>b;
    mp[b]=a;
  }
for(int i=0;i<t;i++){
    string c,d;
    cin>>c>>d;
    d.pop_back();
    cout<<c<<" "<<d<<"; #"<<mp[d]<<endl;
}


 return 0;   
}
 