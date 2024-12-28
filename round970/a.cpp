#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int a;
  int b;
  cin >> a;
  cin >> b;

  int arr[a];
  int arr2[b];
  for(int i=0; i < a;i++) arr[i]=1;
  for(int i=0; i < b;i++) arr2[i]=2;


  int s1 =0;
  for(int i=0; i< a;i++) s1+=arr[i];
  int s2 =0;
  for(int i=0; i< b;i++) s2+=arr2[i];

  if( (s1%2)==0 && (s2%2)==0 && a>1) {
    cout <<"YES\n";
  }else if( (s1%2)==0 && (s2%2)!=0 && b>1){
    cout <<"YES\n";
  }else{
    cout <<"NO\n";
  }
}

int main() {

  /* ios_base::sync_with_stdio(false);
  cin.tie(NULL); */

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
