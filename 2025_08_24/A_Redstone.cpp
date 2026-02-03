// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, x;
  cin >> n;
  unordered_set<int> s;
  bool ok = false;

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (s.count(x))
      ok = true;
    s.insert(x);
  }
  cout << (ok ? "YES" : "NO") << endl;
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