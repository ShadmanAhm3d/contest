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
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;
    vector<char> freq(7, 0);
    // Update frequency of each character in A-G
    for (char c : s) {
      if (c >= 'A' && c <= 'G') {
        freq[c - 'A']++;
      }
    }

    int count = 0;
    while (m > 0) {
      for (int i = 0; i < 7; i++) {
        if (freq[i] == 0) {
          count++;
        } else {
          freq[i]--;
        }
      }
      m--;
    }

    cout << count << "\n";
  }

  return 0;
}
