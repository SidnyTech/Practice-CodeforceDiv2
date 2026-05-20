/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/contest/2228/problem/C1
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
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

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << " [l" << __LINE__ << "]\n"
#define dbgv(v)                           \
  cerr << #v << " = [";                   \
  for (auto& _e : (v)) cerr << _e << ' '; \
  cerr << "]\n"
#else
#define dbg(x)
#define dbgv(v)
#endif

void solve() {}

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