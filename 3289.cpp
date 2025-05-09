#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> count(nums.size(), 0);
        vector<int> result;

        for (int num : nums) {
            count[num]++;
        }

        for (int i = 0; i < count.size(); i++) {
            if (count[i] == 2) {
                result.push_back(i);
            }
        }

        return result;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {0, 1, 1, 0};

    vector<int> result = obj.getSneakyNumbers(nums);

    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
