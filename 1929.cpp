#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            int n = nums.size();
            vector<int> B(2 * n);

            for (int j = 0; j < n; j++) {
                B[j] = nums[j];
                B[j + n] = nums[j];
            }

            return B;
        }
};

int main(){
    Solution obj;
    vector<int> nums = {1, 2, 3};

    vector<int> result = obj.getConcatenation(nums);

    cout << "Concatenated vector: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
