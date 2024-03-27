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
    int x1, y1, x2, y2, x3, y3, x4, y4;
        
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;

        int sideLength = max(abs(x2 - x1), abs(y2 - y1));

        int area = sideLength * sideLength;

        cout << area << endl;
  }


 return 0;
}
