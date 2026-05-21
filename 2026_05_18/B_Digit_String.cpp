/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/contest/2230/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define vi vector<int>
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
const ll INF = 4e18;
const int MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve() {
  int ans = 0, n;
  string s;
  cin >> s;

  n = sz(s);
  vi cnt2(n + 1, 0), cnt13(n + 1, 0);

  for (int i = 0; i < n; ++i) {
    cnt2[i + 1] = cnt2[i] + (s[i] == '2');
  }
  for (int i = n - 1; i >= 0; --i) {
    cnt13[i] = cnt13[i + 1] + (s[i] == '1' || s[i] == '3');
  }
  for (int i = 0; i <= n; ++i) {
    ans = max(ans, cnt2[i] + cnt13[i]);
  }

  cout << n - ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
}

/*
Mi objetivo es [2s][1s y 3s]

     /\_/\
    ( o.o )
     > ^ <
*/