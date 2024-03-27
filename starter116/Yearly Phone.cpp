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

     int year;
     cin >> year;
     int dig1 = year % 10;
     year= year/10;
    int dig2 = year %10;

    cout<<"K"<<dig2<<dig1;
  

 return 0;
}
