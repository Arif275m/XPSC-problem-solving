  #include<bits/stdc++.h>
 using namespace std;
 int main()
 { 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 int a, b;
    cin >> a >> b;
    if (a < b) 
    swap(a, b);

     int Tmax = a + (a- 1);
     int OMax = a + b;
     cout << max( Tmax,OMax) << endl;
  return 0;   
 }
  