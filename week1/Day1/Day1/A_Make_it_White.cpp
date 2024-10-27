 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
 while(t--) {
    int n;
    cin>>n;
    string s;
    cin>>s;
   vector<int> V;
    for(int i=0;i<n;i++)
    { 
        if(s[i]=='B')
        {
             
            V.push_back(i);
        }
     
    }
       int  ans=(V.back()+1)-V.front();
    cout<<ans<<endl;
 }
 return 0;   
}
 