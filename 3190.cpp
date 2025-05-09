#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] - 1) % 3 == 0 || (nums[i] + 1) % 3 == 0) {
                n += 1;
            }
        }
        return n;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    int result = sol.minimumOperations(nums);
    cout << "Minimum operations: " << result << endl;
    return 0;
}
