#include <string>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;


string generateT(const string& s) {
    int n = s.length();
    string t;

    // Take the first half of s
    t = s.substr(0, n / 2);

    // Take the second half of s and reverse it
    string secondHalfReversed = s.substr(n / 2);
    reverse(secondHalfReversed.begin(), secondHalfReversed.end());

    // Append the reversed second half to t
    t += secondHalfReversed;

    return t;
}


void solve() {

  string s;
  cin >> s;
  string st = generateT(s);
  

  //TODO : Fix palindrome error
  for (int i = 1; i < s.length(); i++) {
    if (s[i] != s[i - 1]) {
      cout << "YES\n";
      cout <<st << endl;
      return;
    }
  }
  cout << "NO" << endl;
}
int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
