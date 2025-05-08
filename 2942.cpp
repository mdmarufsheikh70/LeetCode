#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        int n = words.size();
        for (int i = 0; i < n; i++) {
            string A = words[i];
            for (int j = 0; j < A.size(); j++) {
                if (A[j] == x) {
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};

int main() {
    Solution solution;
    vector<string> words = {"apple", "banana", "cherry", "date"};
    char x = 'a';
    
    vector<int> result = solution.findWordsContaining(words, x);
    
    for (int i : result) {
        cout << i << " ";
    }
    
    return 0;
}
