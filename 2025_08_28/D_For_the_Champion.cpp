/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, k, dif, sum, min = 2e9, X, Y;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i].first >> v[i].second;
  }

  // calculamos la minima suma
  for (int i = 0; i < n; ++i) {
    if (min > v[i].first + v[i].second)
      min = v[i].first + v[i].second;
  }
  cout << "? L 1000000000\n";
  cout.flush();
  cin >> k;
  cout << "? L 1000000000\n";
  cout.flush();
  cin >> k;
  cout << "? D 1000000000\n";
  cout.flush();
  cin >> k;
  cout << "? D 1000000000\n";
  cout.flush();
  cin >> k;

  sum = (k - min - 4e9) * (-1); // suma de X + Y

  // calculamos la minima resta
  min = 2e9;
  for (int i = 0; i < n; ++i) {
    if (min > v[i].first - v[i].second)
      min = v[i].first - v[i].second;
  }
  cout << "? U 1000000000\n";
  cout.flush();
  cin >> k;
  cout << "? U 1000000000\n";
  cout.flush();
  cin >> k;
  cout << "? U 1000000000\n";
  cout.flush();
  cin >> k;
  cout << "? U 1000000000\n";
  cout.flush();
  cin >> k;

  dif = (k - min - 4e9) * (-1); // resta de X - Y

  X = (sum + dif) / 2; // despejamos X= (X+Y) + (X-Y) /2
  Y = sum - X;         // despejamos Y= (X+Y) - X
  cout << "! " << X << " " << Y << endl;
  cout.flush();
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