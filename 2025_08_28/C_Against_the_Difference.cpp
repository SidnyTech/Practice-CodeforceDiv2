// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  vector<vector<int>> pos(n + 1);
  vector<int> idx(n);
  for (int i = 0; i < n; i++) {
    idx[i] = pos[a[i]].size();
    pos[a[i]].push_back(i);
  }

  vector<int> dp(n + 1);
  for (int i = n - 1; i >= 0; i--) {
    dp[i] = dp[i + 1];
    int v = a[i], t = idx[i];
    
    if (t + v - 1 < (int)pos[v].size()) {
      int last = pos[v][t + v - 1];
      dp[i] = max(dp[i], v + dp[last + 1]);
    }
  }
  cout << dp[0] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/
