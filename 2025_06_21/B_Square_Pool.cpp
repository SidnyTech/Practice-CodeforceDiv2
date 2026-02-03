#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, s, dx, dy, x, y, entraron=0;
    cin >> n >> s;
    
    while(n--){
        cin >> dx >> dy >> x >> y;
        if (dx==dy) entraron += (x==y);
        else entraron += (x+y==s);
    }

    cout << entraron << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

//by Sidney Angelly Sahonero Garrado