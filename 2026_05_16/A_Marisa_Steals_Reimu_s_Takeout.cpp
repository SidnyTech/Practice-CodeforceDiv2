/*
  author: Sian01
  Name: Sidney A. Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, ans = 0, sec = 1;
  cin >> n;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 0)
      ans++;
    else
      m[x]++;
  }
  if (ans == n) {
    cout << ans << endl;
    return;
  }

  int mini = min(m[1], m[2]);
  m[1] -= mini;
  m[2] -= mini;
  ans += mini + (m[1] / 3) + (m[2] / 3);

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