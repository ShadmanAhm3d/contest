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
    int n  ; int k ;
    cin >> n >> k;

    vector<char>alphabetsholder(26);

    for (int i = 0; i < 26; i++) {
      alphabetsholder[i] = 'a' + i;
    }

    /* string s = " ";
    string t  = " "; */
    
    vector<char>ans;

    for(int i=0 ; i< k ;i++){
      char elem = alphabetsholder[i];
      ans.push_back(elem);
    }
    for(int i=k-1 ; i>= 0 ;i--){
      if(ans.size() < (n*k)){
      char elem = alphabetsholder[i];
      ans.push_back(elem);
      }
    }


    for(auto i : ans){
      cout << i ;
    }

    cout << endl;




  }

 return 0;
}
