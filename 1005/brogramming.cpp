#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){

  int n ; cin>> n;
  string s ;cin>> s;

  int count = 0;
  for(int i=1; i< n; i++){
    if(s[i]!=s[i-1]){
      count++;
    }
  }

  if(s[0]=='1')count++;

  cout << count << endl;


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
