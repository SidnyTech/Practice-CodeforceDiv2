/*
  author: SiAn01
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, ans = 1e9;
  cin >> n;
  vector<int> a(n);

  for (int &x : a)
    cin >> x;

  if (is_sorted(a.begin(), a.end())) {
    cout << -1 << endl;
    return;
  }
  vector<int> b = a;
  sort(b.begin(), b.end());

  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      ans = min(ans, max(b[n - 1] - a[i], a[i] - b[0]));
    }
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