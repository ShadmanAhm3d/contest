#include <cmath>
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

  int tc;
  cin >> tc;
  while (tc--) {
    int n, k, x;

    cin >>n>>k>>x;
    if( k >= x ){
      cout << "No" << endl;
      continue;
    }

      int minvalatidx = pow(2, (k - 1));
      if (x >= minvalatidx) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    
  }

  return 0;
}
