#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long result = 0;
        int start = 0;
        
        for (int end = 0; end < n; end++) {
            if (a[end] > q) {
                start = end + 1;
            } else {
                int length = end - start + 1;
                if (length >= k) {
                    result += (length - k + 1);
                }
            }
        }

        cout << result << '\n';
    }

    return 0;
}
