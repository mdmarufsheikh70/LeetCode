#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = 0;
        int size = nums.size();
        
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] == nums[j]) {
                    n++;
                }
            }
        }
        
        return n;
    }
};

int main() {
    Solution obj;
    vector<int> nums1 = {1, 2, 3, 1, 1, 3};
    vector<int> nums2 = {1, 1, 1, 1};
    
    cout << "Example 1 Output: " << obj.numIdenticalPairs(nums1) << endl;
    cout << "Example 2 Output: " << obj.numIdenticalPairs(nums2) << endl;
    
    return 0;
}
