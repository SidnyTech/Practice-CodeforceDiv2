/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
// Explanation: count number of 0s all must be in front,
// count 1s that prevent it

#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, cnt_zeros;
  string s;
  cin >> n >> s;

  cnt_zeros = count(s.begin(), s.end(), '0');

  cout << count(s.begin(), s.begin() + cnt_zeros, '1') << endl;
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