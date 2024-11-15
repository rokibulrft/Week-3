#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;
        
        vector<long long int> a(n);
        vector<long long int> b(m);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int j = 0; j < m; j++) {
            cin >> b[j];
        }
        
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        
        long long int max_energy = 0;
        
        for (int i = 0; i < min(n, m); i++) {
            max_energy += min(a[i], b[i] * h);
        }
        
        cout << max_energy << endl;
    }
    return 0;
}