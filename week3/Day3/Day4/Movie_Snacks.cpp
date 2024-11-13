 #include<bits/stdc++.h>
using namespace std;
int main()
{ 
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
  int x,y,z;
  cin>>x>>y>>z;
  int total1=2*x+3*y;
  int total2=2*z+y;
   cout<<min(total1,total2);

  

 return 0;   
}
 