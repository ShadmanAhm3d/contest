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
  ;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  /* for (int i = 0; i < n; i++) {
    cout << "Elem" << i << " " << arr[i];
    cout << endl;
  }

    cout << endl;
  cout << arr[n/2];
    cout << endl;
  
  cout << arr[n-1] ;

*/
  int x = 0;
  for(int i=0; i< n-1 ; i++){
    if(x < (arr[i] + arr[n-1])){
      x = arr[i] + arr[n-1];
    }
  }

  cout << x << endl;
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
