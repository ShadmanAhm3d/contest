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
  int c;
  cin >> c; // rows  i  gap
  int d;
  cin >> d; // col j  gap
  int smallest = INT_MAX;
  /* vector<vector<int>> vec(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> vec[i][j];
      smallest = min(smallest, vec[i][j]);
    }
  } */
  vector<int> arr(n * n, 0);

  set<int> s;
  for (int i = 0; i < n * n; i++) {
    int x;
    cin >> x;
    smallest = min(smallest, x);
    s.insert(x);
  }

  vector<vector<int>> vec(n, vector<int>(n, 0));
  vec[0][0] = smallest;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 && j == 0) {
        continue;
      }
      if (i != 0) {
        vec[i][j] = vec[i - 1][j] + c;
      }else{
        vec[i][j] = vec[i][j - 1] + d;
      }
      if (!(s.find(vec[i][j]) != s.end())) {
        cout << "NO" << endl;
        return;
      } else {
        s.erase(vec[i][j]);
      }
    }
  }
  cout << "YES" << endl;
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
