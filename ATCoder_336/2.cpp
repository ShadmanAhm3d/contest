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

  int x; 
  cin >> x;

  int index=0;
  vector<int>ans ;
  while( x > 0 ){
    ans.push_back(x % 2);
        x = x / 2;
        index++;
  }

  int count =0;
  for(int i=0;i<ans.size();i++){
     if(ans[i]==0){
      count++;
    }else{
      break;
    }
  }

  cout << count;

 return 0;
}
