 #include<bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        string t;
        cin >> t;
        
        int count1 = 0;
        int count = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                count1++;
            }
        }
        
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == 'a') {
                count++;
            }
        }
        
        if (count1 == count && count1!=0 && count!=0 ) {  
            cout << "Yes" << endl;
        }  
      else  {
        cout<<"No"<<endl;
      }
    }
    
    return 0;   
}
