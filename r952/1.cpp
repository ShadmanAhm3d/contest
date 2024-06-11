#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
 
  string s ;
  string t ;
  cin >> s;
  cin >> t;

  char x = s[0];
  s[0]  = t[0];
  t[0]  = x;

  cout << s << " "<<t<<endl;
}


int main(){

  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
