#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    /* int klimit = min(n, b);

    ll sold = 0;
    // sell for b
    for (ll i = 0; i < n; i++) {
        if (b > a) {
            sold = (sold + b) % mod;
            b--;
        } else {
            sold = (sold + a) % mod;
        }
    }

    cout << sold << endl; */


    if( a >=b){
        cout << n*a << endl;
        return;
    }
    ll k = min(b-a , n);
    // k derivation se bhi nikal sakta 
    cout << (k*b) - (k * (k-1)/2 )+ (n-k) * a << endl;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}

