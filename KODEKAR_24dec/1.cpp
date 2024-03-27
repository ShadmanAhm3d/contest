#include <algorithm>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;
bool solve(vector<int> &arr) {
  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size() - 1; ++i) {
    if (arr[i + 1] - arr[i] != 1) {
      return false; 
    }
  }
  return true; 
}

int main() {
  int N;
  cin >> N; 

  vector<int> arr(N);
  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
  }

  
  bool result = solve(arr);

 
  cout << (result ? "1" : "0") << endl;

  return 0;
}
