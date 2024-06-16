
#include <vector>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  ll n;
  cin >> n;

  vector<ll> arr(n, 0);
  for (auto &i : arr)
    cin >> i;

  ll prex = 0;
  ll count = 0;
  ll mx = 0;
  for (int i = 0; i < n; i++) {
    prex += arr[i];
    if (arr[i] > mx) {
      mx = arr[i];
    }

    if (prex - mx == mx)
      count++;
  }
  cout << count << endl;
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
