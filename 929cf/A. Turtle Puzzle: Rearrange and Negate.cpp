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
     int n;
    cin >>n;

    vector<int>v(n);
    int sum=0;
    for(int i=0 ; i<n;i++){
      int elem ;
      cin >> elem;
      if(elem<=0){
        elem= -(elem);
      }
      v.push_back(elem);
    }

    for(int i=0 ; i<v.size();i++){
      sum+=v[i];
    }
    cout <<sum << endl;

  }

 return 0;
}
