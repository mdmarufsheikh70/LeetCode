#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result= "";
        for (char c : address) {
            if (c == '.') {
                result += "[.]";
            } else {
                result += c;
            }
        }
        return result;
    }
};

int main() {
    Solution obj;
    string s = "1.1.1.1";
    cout << obj.defangIPaddr(s) << endl;
    return 0;
}
