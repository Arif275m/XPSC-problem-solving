 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  cin.ignore();
  while(t--)
   {
       string s;
      getline(cin,s);
        vector<int>V;
        vector <int>v;  
        vector<bool>ans(s.size(),true); 
   for(int i=0;i<s.size();i++)
   {

    if(s[i]=='b' )
    {
        if(!v.empty())
        {
        ans[v.back()]=false;
        v.pop_back();

        }
        ans[i]=false;
        
    }
   else if(s[i]=='B' )
    {
        if(!V.empty())
        {
        ans[V.back()]=false;
        V.pop_back();

        }
        ans[i]=false;
        
    }
    else if(s[i]>='A'&& s[i]<='Z')
    {
        V.push_back(i);
    }
    else 
    {
        v.push_back(i);
    }
     
   }
   for(int i=0;i<s.size();i++)
   {
    if(ans[i])
    {
        cout<<s[i];
    }

   }
   cout<<endl;
   }
   

 return 0;   
}
 