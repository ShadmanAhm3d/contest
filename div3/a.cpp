#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Faster input/output
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int x, y;
        cin >> x >> y;

        y = y * 4;
        int yTakes = (y + 8 - 1) / 8;
        int squares_leftforx = (15 * yTakes) - y;

        x = x - squares_leftforx;

        if (x <= 0) {
            cout << yTakes << endl;
            continue;
        } else {
            int xTakes = (x + 14) / 15; // Ceil of x / 15
            int ans = yTakes + xTakes;
            cout << ans << endl;
        }
    }

    return 0;
}

