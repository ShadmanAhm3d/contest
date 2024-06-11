#include <climits>
#include <vector>
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
    int n;cin>> n;
    vector<int>v(n,0);
    for(auto &i : v) cin>> i;


    //find two most minumum 
    int ldistance = INT_MAX;
    int c1  = 0,c2 = 0;

    for(int i=1; i < n; i++){
      int cld = abs(v[i]-v[i-1]);
      if(cld < ldistance){
        c1 = i;
        c2 = i-1;
        ldistance = cld;
      }
    }

    int ans = 0;
    if(v[c1] >v[c2]){
      //means c1 is bigger
      ans = v[c1]-1;

    }else{
      //means c2 is bigger
      ans = v[c2]-1;
    }

    cout << ans << endl;
  }

 return 0;
}
