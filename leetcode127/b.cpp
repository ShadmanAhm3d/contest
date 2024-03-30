#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Solution {
public:
    int minimumLevelsToGainMorePoints(vector<int>& possible) {

        int n = possible.size();
        vector<int>arr1(n);
        vector<int>arr2(n);

        bool flag = false;
        int sum1=0;
        for(int i=n-1; i>=0 ;i--){
            sum1+=possible[i];
            arr1[i] = sum1;
        }
        int sum2 =0;
        for(int i=0 ; i < n ;i--){
            sum1+=possible[i];
            arr2[i] = sum1;
        }

        int ans =0;
        for(int i=0; i<n;i++){
            if(arr2[i] > arr1[1]){
                ans = i ;
            }
        }


        if(sum1 == sum2){
            return -1;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    // Dynamic input construction
   // srand(time(NULL)); // Seed for random number generation

    
    
    vector<int> possible;
    for (int i = 0; i < k; ++i) {
        possible[i] = rand() % 2; // Randomly assign 0 or 1 to each level
    }

    // Displaying generated input
    cout << "Number of levels: " << n << endl;
    cout << "Possible array: ";
    for (int i = 0; i < n; ++i) {
        cout << possible[i] << " ";
    }
    cout << endl;

    // Call the function and display the result
    int result = solution.minimumLevelsToGainMorePoints(possible);
    cout << "Minimum number of levels to gain more points: " << result << endl;

    return 0;
}
