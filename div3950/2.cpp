
#include <algorithm>
#include <vector>
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

    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for(int i=0; i< n; i++){
      cin >> a[i];
    }
    int org= a[f-1];
    // cout << " \n  ORG + : ::: :  " << org << endl;
    std::sort(a.begin(), a.end(), std::greater<int>());   //sorted vector a in reverse order 

    /* for(int i=0; i< n; i++){
      cout <<  a[i] << " " ;
    } */

    // cout << endl;

    bool found1 = false;
    bool found2 = false;

    for(int i=0; i < k ; i++){
      if(a[i] == org){
        found1 = true;
        break;
      }
    }

    for(int i=k ; i< n ; i++){
      if(a[i]==org){
        found2 = true;
          break;
      }
    }

    if(found1 == true && found2 == true){
      cout << "MAYBE" << endl;
    }else if(found1 ==true && found2 == false){
      cout << "YES" << endl;
    }else {
      cout << "NO" << endl;
    }


  }

  return 0;
}
