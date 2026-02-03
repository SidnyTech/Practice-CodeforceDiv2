#include <bits/stdc++.h>
using namespace std;
#define int long long

int t, i, a, b, k, n, ans;
int inv[100001]; //inversos modulares para división en combinatoria
const int mod=1e9 + 7;

void solve() {
    cin>>a>>b>>k;
	n = k*a-k+1; //mínimo filas necesarias
	ans = k; //ans = combinatoria C(d, a)
    for(i=1; i<=a; i++)
        ans = ans * ((n-i+1)%mod)%mod * inv[i]%mod;

	cout << n%mod <<' '<< (ans*b-ans+1+mod)%mod <<endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    inv[1]=1;

	for(i=2;i<=100000;i++)
        inv[i] = (mod-mod/i) * inv[mod%i]%mod;
    while (t--) solve();
}

// by Sidney Angelly Sahonero Garrado