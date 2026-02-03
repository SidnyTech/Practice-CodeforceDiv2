// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, c, weight = 0, punt = 1;
  cin >> n >> c;
  vector<int> a(n);

  for (int &x : a) {
    cin >> x;
  }
  sort(a.begin(), a.end(), greater<int>());

  for (int i = 0; i < n; i++) {
    if (a[i] <= c) {
      weight++;
      for (int &x : a) {
        x *= 2;
      }
    }
  }
  cout << n - weight << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

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