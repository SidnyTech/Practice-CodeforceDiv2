/*
  author: Sian01
  Name: Sidney A. Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, x1, x2, k, ans = 0;
  int esp1, esp2;
  cin >> n >> x1 >> x2 >> k;

  if (n == 2 || n == 3) {
    cout << 1 << endl;
    return;
  }

  if (x1 > x2)
    swap(x1, x2);

  esp1 = x2 - x1;
  esp2 = n + x1 - x2;

  cout << min(esp1, esp2) + k << endl;
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