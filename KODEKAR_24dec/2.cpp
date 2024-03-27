#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;



int main() {
    string s;
    cin >> s;

    string res;
    int count = 0; 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            res.push_back(s[i]);
            count = 0;
        } else if (s[i] == '+' && count < 1) {
            res.push_back(s[i]); 
            count++;
        }
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] ;
    }

    return 0;
}

