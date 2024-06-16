 #pragma GCC optimize("O3")
 #include <bits/stdc++.h>
 #define mod 1000000007
 #define endl '\n'
 #define ll  long long
 #define pb push_back
 using namespace std;

 void solve(){
    int n,a,b;
    cin>> n>> a>>b;

   int ans1 = n * a;
   int x = n;
   int ans2 = 0;
   while(x > 1){
     ans2+=b;
     x-=2;
   }
   if(x > 0){
     ans2+=a;
   }
    
   cout << min(ans1,ans2) << endl;

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
