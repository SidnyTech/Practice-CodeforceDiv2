// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (max(a, b) > 2 * min(a, b) + 2) {
    cout << "NO" << endl;
    return;
  }
  int x = c - a, y = d - b;
  if (max(x, y) > 2 * min(x, y) + 2) {
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;
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