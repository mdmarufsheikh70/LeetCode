#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (const string& op : operations) {
            x += (op[1] == '+' ? 1 : -1);
        }
        return x;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;

    vector<string> operations(n);
    for (int i = 0; i < n; i++) {
        cin >> operations[i];
    }

    int result = obj.finalValueAfterOperations(operations);
    cout << result << endl;

    return 0;
}
