#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if(n ==3 ){
        cout << 3 <<endl;
    }else{
        cout << 2 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

