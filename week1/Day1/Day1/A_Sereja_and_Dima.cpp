  #include<bits/stdc++.h>
 using namespace std;
 int main()
 { 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
   
   int n;
   cin>>n;
   int a[n];
   for (int i=0;i<n;i++)
   {
    cin>>a[i];
   }
 int left=0;
 int right=n-1;
 int Ssum=0;
 int Dsum=0;

 for (int i=0;i<n;i++)
 {
 if(i%2==0)
 {
    if(a[left]>a[right])
    {
        Ssum+=a[left];
        left++;
    }
     else
     {
        Ssum+=a[right];
         right--;
     }
     
     
 }
  if(i%2!=0)
 {
    if(a[left]>a[right])
    {
        Dsum+=a[left];
         left++;
    }
     else
     {
        Dsum+=a[right];
         right--;
     }
   
 }
 }
 cout<<Ssum<<" "<<Dsum;
  return 0;   
 }
  