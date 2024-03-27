#include <vector>
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

        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if ((sum) % 3 == 0) {
            cout << 0 << endl;
            continue;
        }
        int steps = 0;
        bool found = false; // Flag to check if condition is met
        for (int i = 0; i < n; i++) {
            int elem = a[i];
            if ((sum - elem) % 3 == 0) {
                steps++;
                cout << steps << endl;
                found = true; // Set the flag to true
                break; // Exit the loop once condition is met
            }
        }
        if(found) continue; // Skip the rest of the loop if the flag is set

            int sum_temp = sum;
            sum_temp++;
            if ((sum_temp) % 3 == 0) {
                steps++;
                cout << steps << endl;
            }else{
                steps++;
                steps++;
                cout << steps << endl;
        }
      
    }

    return 0;
}

