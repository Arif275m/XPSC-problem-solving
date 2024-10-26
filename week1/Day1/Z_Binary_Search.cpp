  #include <bits/stdc++.h>
  using namespace std;
  int main()
  {
   int n,t;
   cin>>n>>t;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }    
     sort(a,a+n);
//        for(int i=0;i<n;i++)
//    {
//     cout<<a[i];
//    }    
   while(t--)
   {
    int q;
    cin>>q;
    int l=0;
    int r=n-1;
    
    bool flag=false;
    while(l<=r)
    {   int mid=(l+r)/2;
        if(a[mid]==q)
        {
            flag=true;
            break;
        }
        else if(q>a[mid])
        {
            l=mid+1;
        }
        else if(q<a[mid])
        {
            r=mid-1;
        }

    }
    if(flag==true)cout<<"found"<<endl;
    else cout<<"not found"<<endl;
   }
    return 0;
  }