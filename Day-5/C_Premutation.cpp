#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n + 1, vector<int>(n));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        map<int, int> lastColumnCount;
        map<int, int> lastColumnIndex;
        for (int i = 1; i <= n; i++) {
            lastColumnCount[matrix[i][n - 1]]++;
            lastColumnIndex[matrix[i][n - 1]] = i;
        }

        int uniqueValue = 0, repeatedValue = 0;
        for (auto entry : lastColumnCount) {
            if (entry.second == 1) {
                uniqueValue = entry.first;
            } else {
                repeatedValue = entry.first;
            }
        }
        for (int j = 1; j < n; j++) {
            cout << matrix[lastColumnIndex[uniqueValue]][j] << " ";
        }
        cout << repeatedValue << endl;
    }
    return 0;
}
