#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;

    for (int i = 0; i < accounts.size(); i++) {
        int currentWealth = 0;

        for (int j = 0; j < accounts[i].size(); j++) {
            currentWealth += accounts[i][j];
        }

        maxWealth = max(maxWealth, currentWealth);
    }

    return maxWealth;
}

int main() {
    vector<vector<int>> accounts = {
        {1, 2, 3}, 
        {3, 2, 1}
    };

    cout << "Richest Customer Wealth: " << maximumWealth(accounts) << endl;
    return 0;
}
