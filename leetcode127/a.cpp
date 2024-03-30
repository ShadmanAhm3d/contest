

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++) {
            if(k < nums[i]) {
                return 1;
            }
        }
        
        int ori = 0; // count
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum >= k) {
                return i+1;
            }
        }
    return -1;
    }
};

int main() {
    Solution solution;
    
    // Dynamic test case input
    vector<int> nums = {1,2};
    int k = 0;

    // Call the function and display the result
    int result = solution.minimumSubarrayLength(nums, k);
    cout << "Result: " << result << endl;

    return 0;
}
