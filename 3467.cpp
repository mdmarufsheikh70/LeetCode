#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int n=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                ans[i] = 0;
                n++;
            } 
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                ans[n] = 1;
                n++;
            } 
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    vector<int> transformed = solution.transformArray(nums);

    cout << "Transformed array: ";
    for (int num : transformed) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
