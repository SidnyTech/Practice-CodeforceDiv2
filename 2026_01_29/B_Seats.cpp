/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, ans = 0, last_one = -2;
  string s;
  cin >> n >> s;

  if (n == 1 || n == 2) {
    cout << 1 << endl;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      ans += (i - last_one - 1) / 3 + 1;
      last_one = i;
    }
  }

  ans += (n - last_one) / 3;

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