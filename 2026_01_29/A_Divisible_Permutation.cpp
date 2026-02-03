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
  deque<int> a(n), ans;

  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }

  while (!a.empty()) {
    ans.push_front(a.front());
    a.pop_front();
    if (!a.empty()) {
      ans.push_front(a.back());
      a.pop_back();
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " \n"[i == n - 1];
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