/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/contest/2231/problem/B
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
  ll n, k = 0;
  cin >> n;
  vll a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  for (int i = n - 2; i >= 0; --i)
    if (a[i] > a[i + 1])
      k = max(k, a[i] - a[i + 1]);

  for (int i = 1; i < n; ++i)
    if (a[i] < a[i - 1])
      a[i] += k;

  if (is_sorted(all(a)))
    cout << "YES\n";
  else
    cout << "NO\n";
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