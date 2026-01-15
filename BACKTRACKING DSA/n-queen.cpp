#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<char>> grid;
vector<vector<string>> result;

// Function to check if we can place a queen safely
bool canplacequeen(int row, int col, int n) {
    // Check column (upwards)
    for (int i = row - 1; i >= 0; i--) {
        if (grid[i][col] == 'Q')
            return false;
    }

    // Check left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (grid[i][j] == 'Q')
            return false;
    }

    // Check right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (grid[i][j] == 'Q')
            return false;
    }

    return true;
}

// Recursive function to place queens
void f(int row, int n) {
    if (row == n) {
        // One valid configuration found
        vector<string> temp;
        for (int i = 0; i < n; i++) {
            string res = "";
            for (int j = 0; j < n; j++) {
                res += grid[i][j];
            }
            temp.push_back(res);
        }
        result.push_back(temp);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (canplacequeen(row, col, n)) {
            grid[row][col] = 'Q';
            f(row + 1, n);
            grid[row][col] = '.'; // backtrack
        }
    }
}

// Main function that initializes grid and calls recursion
vector<vector<string>> nqueen(int n) {
    grid.assign(n, vector<char>(n, '.'));
    result.clear();
    f(0, n);
    return result;
}

// Driver code
int main() {
    int n = 4;
    vector<vector<string>> ans = nqueen(n);

    cout << "Total Solutions for " << n << "-Queens: " << ans.size() << "\n\n";

    for (auto &board : ans) {
        for (auto &row : board) {
            cout << row << endl;
        }
        cout << endl;  // space between solutions
    }

    return 0;
}
