#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

    int tc;
    cin >> tc;
    while (tc--) {

        int n;
        cin >> n;
        string first, second;
        cin >> first >> second;

        int operations = 0; // Number of operations

        for (int i = 0; i < n; i++) {
            if (second[i] == '1' && first[i] == '0') {
                operations++;
            } else if (second[i] == '0' && first[i] == '1') {
                operations++;
                if (i + 1 < n && second[i + 1] == '1') {
                    first[i + 1] = '0'; // Move cat from i to i + 1
                    i++; // Skip the next position since the cat has been moved
                }
            }
        }

        cout << max(operations, 1) << endl;  // Corrected output for the third test case
    }

    return 0;
}

