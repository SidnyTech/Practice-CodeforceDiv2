/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/contest/2231/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define vi vector<int>
#define vll vector<ll>
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
const ll INF = 4e18;
const int MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve() {
  ll n, ans = 0;
  cin >> n;
  vll a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  while (true) {
    ll m = *min_element(all(a));
    ll l, r;
    if (m % 2 == 0) {
      r = m;
      l = m / 2;
    } else {
      r = m + 1;
      l = m;
    }

    for (int i = 0; i < n; ++i) {
      while (a[i] > r) {
        if (a[i] % 2 == 0)
          a[i] /= 2;
        else
          ++a[i];
        ++ans;
      }
    }

    bool ok = true;
    ll numa = 0;
    for (int i = 0; i < n; ++i) {
      if (a[i] != l && a[i] != r) {
        ok = false;
        break;
      }
      if (a[i] == l) ++numa;
    }

    if (ok) {
      if (numa != n) {
        if (l == 1)
          ans += min(numa, n - numa);
        else
          ans += numa;
      }
      break;
    }
  }

  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/