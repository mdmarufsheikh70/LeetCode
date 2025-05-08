#include <iostream>
#include <cmath>
using namespace std;

int scoreOfString(string s) {
    int n = 0;
    for (int i = 0; i < s.length(); i++) {
        n += abs(s[i] - s[i + 1]);
    }
    return n;
}

int main() {
    string s = "hello";
    cout << scoreOfString(s) << endl;
    return 0;
}
