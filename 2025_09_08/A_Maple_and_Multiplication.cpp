/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int a, b;
  cin >> a >> b;
  if (a == b) {
    cout << 0 << endl;
    return;
  } else if (a % b != 0 && b % a != 0) {
    cout << 2 << endl;
    return;
  } else {
    cout << 1 << endl;
    return;
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