/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int x, y;
  cin >> x >> y;
  for (int i = 29; 0 <= i; --i)
    if ((x >> i) & (y >> i)) {
      int m = (1 << i) - 1;
      int nx = x - (x & m) - (y & m) - 1;
      int ny = y;
      int c = x - nx;
      int fx = x + (1 << i) - (x & m);

      if ((fx & y) == 0 && fx - x < c) {
        nx = fx;
        ny = y;
        c = fx - x;
      }

      int fy = y + (1 << i) - (y & m);
      
      if ((x & fy) == 0 && fy - y < c) {
        nx = x;
        ny = fy;
      }
      x = nx, y = ny;
      break;
    }
  cout << x << ' ' << y << endl;
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