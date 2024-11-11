 #include<bits/stdc++.h>
using namespace std;
void solve(void){
    int n, k, l;
        cin >> n >> k >> l;
        
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int m, lang;
            cin >> m >> lang;
            if (lang == l) {
                v.push_back(m);
            }
        }
        if (v.size() < k)  
        {
            cout << -1 << '\n';
        } 
        else 
        {
             
            sort(v.rbegin(), v.rend());
            int count= 0;
            for (int i = 0; i < k; ++i)
             {
                count +=v[i];
            }
            cout << count << '\n';
        }
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
    solve();}

    return 0;
}
