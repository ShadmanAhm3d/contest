#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

int main() {
    int tc;
    cin >> tc;
    
    while (tc--) {
        int n;
        cin >> n;
        
        int min_val = INT_MIN;  
        int max_val = INT_MAX; 

        vector<int> not_equal;
        
        while (n--) {
            int a, x;
            cin >> a >> x;

            if (a == 1) {
                min_val = max(min_val, x);
            } else if (a == 2) {
                max_val = min(max_val, x);
            } else if (a == 3) {
                not_equal.push_back(x);
            }
        }
        
        int res = max(0, max_val - min_val + 1);

        for (int i = 0; i < not_equal.size(); i++) {
            if (not_equal[i] >= min_val && not_equal[i] <= max_val) {
                res--;
            }
        }
        
        cout << res << "\n";
    }

    return 0;
}
