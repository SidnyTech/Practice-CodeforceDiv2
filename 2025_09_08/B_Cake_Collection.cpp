/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, m, sum = 0;
  cin >> n >> m;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  if (n == 1) {
    cout << m * a[0] << endl;
    return;
  }

  int mn = min(n, m);
  sort(a.begin(), a.end(), greater<int>());
  for (int i = 0; i < mn; ++i) {
    sum += a[i] * (m - i);
  }

  cout << sum << endl;
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