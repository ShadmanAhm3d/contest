#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;




int main(){

  int tc ; cin >> tc;
  while(tc--){
    string s ; cin >> s;

    int cut = 1;
    for(int i=1 ; i< s.length(); i++){
      if( s[i] < s[i-1]){
        cut++;
      }
    }

    cout << cut << endl;
  }

 return 0;
}
