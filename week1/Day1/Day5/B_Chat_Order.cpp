  #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  map<string,bool>m;
   int t;
  cin>>t;
   string s[t];
 for ( int i = 0; i <t; i++)
 {
    cin>>s[i];
    /* code */

 }
 for ( int i = t-1; i >=0; i--)

{
     if(m[s[i] ] !=true )
     {
        cout<<s[i] <<endl; 
        m[s[i] ]=true;
     }
 
}
   
   
 
 return 0;   
}
 