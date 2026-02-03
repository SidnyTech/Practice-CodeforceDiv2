/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  int sum0 = 0, maxs = 0;

  // Mejores intercambios par-impar
  int maxx = -1e18, minn = 1e18;
  int max1 = -1e18, min1 = 1e18;

  for (int i = 0; i < n; i++) {
    cin >> a[i];

    if (i % 2 == 0) {
      sum0 += a[i];
      minn = min(minn, 2 * a[i] + i);
      min1 = min(min1, 2 * a[i] - i);
    } else {
      sum0 -= a[i];
      maxx = max(maxx, 2 * a[i] + i);
      max1 = max(max1, 2 * a[i] - i);
    }
  }

  // Intercambios simples dentro del mismo tipo
  if (n >= 1) {
    int first = 0;
    int last = (n % 2 == 1) ? n - 1 : n - 2;
    if (last > first) {
      maxs = max(maxs, last - first);
    }
  }
  if (n >= 2) {
    int first = 1;
    int last = (n % 2 == 0) ? n - 1 : n - 2;
    if (last > first) {
      maxs = max(maxs, last - first);
    }
  }

  // Mejores intercambios par-impar
  int maxdiff = -1e18;
  if (maxx != -1e18 && minn != 1e18) {
    maxdiff = max(maxdiff, maxx - minn);
  }
  if (max1 != -1e18 && min1 != 1e18) {
    maxdiff = max(maxdiff, max1 - min1);
  }

  int best_swap = max(maxs, maxdiff);
  int result = max(sum0, sum0 + best_swap);

  cout << result << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/