#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countTriangles(vector<int>& sticks) {
    sort(sticks.begin(), sticks.end());
    int n = sticks.size();
    int count = 0;

    for (int i = n - 1; i >= 2; --i) {
        int left = 0;
        int right = i - 1;

        while (left < right) {
            if (sticks[left] + sticks[right] > sticks[i]) {
                count += (right - left);
                count %= 1000000007; 
                right--;
            } else {
                // Move left pointer to increase the sum
                left++;
            }
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
            vec[i] *= 2; // Doubling the length as per the problem statement
        }

        int result = countTriangles(vec);
        cout << result << endl;
    }

    return 0;
}

