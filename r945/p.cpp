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
    int p1, p2 ,p3;
    cin >> p1 >> p2 >> p3;

    if((p1+p2+p3)%2){
      cout << -1  << endl;
      continue;
    }

    int count =0;
    while(p3 && p2){
         p3--;
         p2--;
         count++;
    }

    while(p3 && p1){
         p3--;
         p1--;
         count++;
    }

    if(p3){
      cout << count << endl;
    }else{
      count+=(p1+p2+p3)/2;
      cout << count << endl;
    }
  }

 return 0;
}
