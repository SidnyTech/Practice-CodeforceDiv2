// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, x, ans = 0;
  cin >> n;
  vector<int> g(n);

  for (int &x : g) {
    cin >> x;
  }

  sort(g.begin(), g.end());

  if (n % 2 == 0) {
    for (int i = 1; i < n; i += 2)
      ans += g[i];
  } else {
    ans += g[0];
    for (int i = 2; i < n; i += 2)
      ans += g[i];
  }

  cout << ans << endl;
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