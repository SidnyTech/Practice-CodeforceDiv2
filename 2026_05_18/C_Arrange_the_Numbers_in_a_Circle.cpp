/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/contest/2230/problem/C
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
ll binpow(ll a, ll b, ll m = MOD) {
  ll r = 1;
  a %= m;
  for (; b; b >>= 1, a = a * a % m)
    if (b & 1) r = r * a % m;
  return r;
}
ll inv(ll a) { return binpow(a, MOD - 2); }

void solve() {
  ll n, ans, cnt1 = 0, cnt2 = 0, sum = 0, gaps = 0;
  cin >> n;
  vll a(n);

  for (ll i = 0; i < n; ++i) {
    cin >> a[i];
    if (a[i] == 1)
      ++cnt1;
    else {
      ++cnt2;
      sum += a[i];
      gaps += (a[i] / 2) - 1;
    }
  }

  if (cnt2 == 1) ++gaps;

  ans = sum + min(cnt1, gaps);
  cout << (ans >= 3 ? ans : 0) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

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