#include <iostream>
#include <vector>

using namespace std;

vector<int> solve( vector<int>& A, vector<int>& B) {
    int N = A.size();
    vector<int> result;

    for (int i = 0; i < N; i++) {
        int a = A[i];
        int b = B[i];


        if (a % 2 == 0 && b % 2 == 0) {
            result.push_back(a * b);
        } else {

            if (10 <= a && a <= 99 && 10 <= b && b <= 99) {
                if (a % 2 == 1 && b % 2 == 0) { 
                    result.push_back(a + b);
                } else if (a % 2 == 0 && b % 2 == 1) { 
                    result.push_back(a - b);
                }
            } else {
                if (a % 2 == 1 && b % 2 == 1) {
                    result.push_back(a * b);
                } else { 
                    result.push_back(0);
                }
            }
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n), barr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> barr[i];
    }

    vector<int> res = solve(arr, barr);
    for (int num : res) {
        cout << num << endl;
    }

    return 0;
}

