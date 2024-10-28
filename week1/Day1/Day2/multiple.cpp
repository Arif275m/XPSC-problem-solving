  #include<bits/stdc++.h>
 using namespace std;
 int main()
 { 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
   
   int a, b, c;
    cin >> a >> b >> c;

    int multiple;
    if (a % c == 0) 
    {
        multiple = a;
    } 
    else 
    {
        multiple = a + c - (a % c);
    }

    if (multiple <= b) 
    {
        cout << multiple << endl;
    } 
    else 
    {
        cout << "-1" << endl;
    }

 
  return 0;   
 }
  

 