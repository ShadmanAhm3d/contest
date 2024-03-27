#include <vector>
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
    int n ;cin >>n ;

    vector<int>a(n);
    int sum=0;
    for(int i=0 ; i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }

    if((sum)%3==0){
      cout << 0 << endl;
      continue;
    }
    //check if removing one element does the job
    int steps =0;
    for(int i=0 ;i<n;i++){
      int elem = a[i];
      if((sum-elem)%3==0){
        steps++;
        cout << steps << endl;
        continue;
      }
    }
  
    /* for(int i=0;i<n;i++){
      int elem =a[i];
      int sum_temp =sum;
      sum_temp++;
      if((sum_temp)%3==0){}
      
    } */

    int sum1=sum;
    int sum2=sum;
    sum2++;

    if((sum1++)%3==0){
      steps++;
      cout <<steps << endl;
      continue;
    }else if((sum2++)%3==0){
      steps++;
      steps++;
      cout <<steps << endl;
      continue;
    }
    
    /* if((sum-1)%3 == 0){
      steps++;
      cout <<steps << endl;
      break;
    }else if((sum+1)%3 ==0){
      steps++;
      cout <<steps << endl;
      continue;
    }else if((sum+2)%3==0){
      steps+=2;
      cout <<steps << endl;
      continue;
    }else{
      steps-=2;
      cout <<steps << endl;
      continue;
    }
  */
  }

 return 0;
}
