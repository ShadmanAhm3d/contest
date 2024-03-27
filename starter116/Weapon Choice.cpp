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
     int h,x,y1,y2,k;
     cin>> h>> x>>y1>>y2>>k;

     // x case 
     //kill the boss
    /* int xhits = 0;
    int hx= h;
    while(hx > 0){
      hx = hx - x;
      xhits++;
    } */
    int xhits = (h + x - 1) / x;

    // y1 case k times 
    int h2 = h;
    int k2 = k;
    int y1count = 0;
    while(k2 > 0 && h2> 0){
      h2 = h2 - y1;
      y1count++;
      k2--;
    }

    int y2count = 0;
    while(h2 > 0){
      h2 = h2-y2;
      y2count++;
    }

    int combineY = y1count+y2count;

    int res= min(combineY,xhits);
    cout<<res << endl;
  }

 return 0;
}

