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
    int n, m;
    cin >> n >> m;

    int count = 0;
  int carry =0;
    while (n > 0 && m > 0) {
        int r1 = n % 10;
        int r2 = m % 10;
        int sum = r1 + r2 + carry;
        carry = sum / 10;

        if (sum + carry >= 10) {
            count++;
        }
        
        n /= 10;
        m /= 10;
    }

    cout << count;

    return 0;

}
