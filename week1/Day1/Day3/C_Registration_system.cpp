 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  map<string,int>reg;
 for(int i =0;i<t;i++)
  {
 string s;
 cin>>s;
 if(reg[s]==0)
  {
    reg[s]=1;
    cout<<"OK"<<endl;

  }
  else{
    cout<<s<<reg[s]<<endl;
    reg[s]++;
  }

  }
   
 return 0;   
}
 