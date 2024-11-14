#include <bits/stdc++.h>
using namespace std;

int a[201][201];
bool vis[201][201];
int dx[] = {-1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1};

bool is_valid(int i, int j, int n, int m) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int si, int sj, long long &sum, int n, int m) {
    sum += a[si][sj];
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++) {
        int ci = si + dx[i];
        int cj = sj + dy[i];
        while (is_valid(ci, cj, n, m)) {
            if (!vis[ci][cj]) {
                sum += a[ci][cj];
                vis[ci][cj] = true;
            }
            ci += dx[i];
            cj += dy[i];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        long long max_sum = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                memset(vis, false, sizeof(vis));
                long long sum = 0;
                dfs(i, j, sum, n, m);
                max_sum = max(max_sum, sum);
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}
