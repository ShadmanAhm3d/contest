#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int l = 0;
    int r = n - 1;
    int ans = 0;

    while ((l <= r) && (k > 0)) {
        if (arr[l] > 0 && k > 0) {
            int decrement = min(arr[l], k);
            arr[l] -= decrement;
            k -= decrement;
            if (arr[l] == 0) {
                ans++;
                l++;
            }
        }

        if (arr[r] > 0 && k > 0) {
            int decrement = min(arr[r], k);
            arr[r] -= decrement;
            k -= decrement;
            if (arr[r] == 0) {
                ans++;
                r--;
            }
        }

        while (l <= r && arr[l] == 0) {
            ans++;
            l++;
        }

        while (r >= l && arr[r] == 0) {
            ans++;
            r--;
        }
    }

    cout << ans << endl;
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

