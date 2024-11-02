 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    bool ok=false;
    int n=s.size();
    for(int i=0;i<s.size()-1;i++){
        cout<<s[i];
        if(s[i]==s[i+1] && !ok){
            if(s[i]!='z')cout<<char(s[i]+1);
            else cout<<'a';
            ok=true;
        }
    }
    if(ok)cout<<s[n-1]<<endl;
    if(!ok  && s[n-1]!='z') cout<<s[n-1]<<char (s[n-1]+1)<<endl;
    else if(!ok) cout<<s[n-1]<<'a'<<endl;
  }
  

 return 0;   
}
 