#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
 
   int x ,y,z;
  cin >>x >> y >> z;

  int xs = min(x,y);
   xs = min(xs,z);

  int xs1 = max(x,y);
   xs1 = max(xs1,z);

   /* int x1 = 0;
   if(x > y && x > z){
    x1 = x;
  }else if(y > x && y > z){
    x1 =y;
  }else{
    x1 = z;
  }

  int x2 = 0;
   if(x < y && x < z){
    x2 = x;
  }else if(y < x && y < z){
    x2 =y;
  }else{
    x2 = z;
  }
*/

  cout << xs1-xs << endl;
}


int main(){

  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
