#include <iostream>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        int year, month, day;
        sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);

        auto intToBinary = [](int num) {
            string binary = "";
            while (num > 0) {
                binary = to_string(num % 2) + binary;
                num /= 2;
            }
            return (binary.empty()) ? "0" : binary;
        };

        return intToBinary(year) + "-" + intToBinary(month) + "-" + intToBinary(day);
    }
};

int main() {
    Solution solution;
    cout << solution.convertDateToBinary("2080-02-29") << endl;
    cout << solution.convertDateToBinary("1900-01-01") << endl;
    return 0;
}
