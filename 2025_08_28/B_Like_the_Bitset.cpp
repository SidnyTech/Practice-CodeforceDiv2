// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, k, cnt = 0;
  string s;
  cin >> n >> k >> s;

  // si k=1 no debe haber 1
  for (char c : s)
    if (c == '1')
      cnt++;
  if (k == 1 && cnt > 0) {
    cout << "NO" << endl;
    return;
  }

  // si hay mas 1 seguidos q k xd
  int seguid = 0;
  bool imposible = false;
  for (char c : s) {
    if (c == '1')
      seguid++;
    else
      seguid = 0;
    if (seguid >= k)
      imposible = true;
    continue;
  }
  if (imposible) {
    cout << "NO" << endl;
    return;
  }

  // si se puede armamos result, menores=1 mayores=0
  cout << "YES" << endl;
  vector<int> p(n);
  int low = 1, high = n;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      p[i] = high--;
    else
      p[i] = low++;
  }
  for (int i = 0; i < n; i++) {
    cout << p[i] << " \n"[i == n - 1];
  }
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
