#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int index = 0;
        for (int i = 0; i < n; i++) {
            ans[index] = nums[i];
            ans[index + 1] = nums[n + i];
            index += 2;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> shuffled = solution.shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int num : shuffled) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
