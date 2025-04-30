#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowedSet(allowed.begin(), allowed.end());
        int count = 0;

        for (const string& word : words) {
            bool isConsistent = true;

            for (char ch : word) {
                if (allowedSet.find(ch) == allowedSet.end()) {
                    isConsistent = false;
                    break;
                }
            }

            if (isConsistent) count++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    string allowed = "ab";
    vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};
    
    cout << sol.countConsistentStrings(allowed, words) << endl;
    return 0;
}
