#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int maxSum = 0;
    int optimalX = 2;

    for (int x = 2; x <= n; x++) {
        int sum = 0;
        for (int k = 1; k * x <= n; k++) {
            sum += k * x;
        }
        if (sum > maxSum) {
            maxSum = sum;
            optimalX = x;
        }
    }
    cout << optimalX << endl;
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

