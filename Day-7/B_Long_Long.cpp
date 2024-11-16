#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long int maxSum = 0;
        int minOps = 0;
        bool inNegativeSegment = false;

        for (int i = 0; i < n; i++) {
            maxSum += abs(a[i]);
            if (a[i] < 0 && !inNegativeSegment) {
                minOps++;
                inNegativeSegment = true;
            } else if (a[i] > 0) {
                inNegativeSegment = false;
            }
        }

        cout << maxSum << " " << minOps << '\n';
    }

    return 0;
}
