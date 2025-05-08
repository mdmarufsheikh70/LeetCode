#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int greatest = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < candies.size(); i++) {
            result.push_back(candies[i] + extraCandies >= greatest);
        }

        return result;
    }
};

int main() {
    Solution obj;
    vector<int> c = {2, 3, 5, 1, 3};
    int extra = 3;

    vector<bool> result = obj.kidsWithCandies(c, extra);

    cout << "Result: ";
    for (bool canHave : result) {
        cout << (canHave ? "true " : "false ");
    }
    cout << endl;

    return 0;
}
