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
        int n; cin >> n;
     string s; cin >> s;

        int x =0;
        for(int i=0 ; i<n;i++){
            if(s[i]>s[i+1]){
                x = i;
                break;
            }
        }

        for(int i=0 ; i<n;i++){
            if(x == i){
                continue;
            }else{
                cout <<s[i];
            }
        }
        cout << endl;

  }

 return 0;
}
