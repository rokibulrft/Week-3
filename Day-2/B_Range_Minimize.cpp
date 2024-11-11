#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int min_range = INT_MAX;
        if (n > 2) {
            min_range = min(min_range, a[n-1] - a[2]);
            min_range = min(min_range, a[n-3] - a[0]);
            min_range = min(min_range, a[n-2] - a[1]);
        } else {
            min_range = 0;
        }

        cout << min_range << endl;
    }
    return 0;
}
