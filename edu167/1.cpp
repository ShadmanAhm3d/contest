#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int x, y;
  cin >> x >> y;

  if (x <= 0 && y <= 0) {
    if (x > y) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
  return;
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
