#include <iostream>
#include <vector>
using namespace std;

void drawSpiral(int n) {
    vector<vector<char>> grid(n, vector<char>(n, ' '));
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    char ch = '#';

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i)
            grid[top][i] = ch;
        ++top;

        for (int i = top; i <= bottom; ++i)
            grid[i][right] = ch;
        --right;

        for (int i = right; i >= left; --i)
            grid[bottom][i] = ch;
        --bottom;

        for (int i = bottom; i >= top; --i)
            grid[i][left] = ch;
        ++left;
    }

    for (auto& row : grid) {
        for (char c : row)
            cout << c << ' ';
        cout << '\n';
    }
}

int main() {
    int n;
    cout << "Enter size of spiral (odd number recommended): ";
    cin >> n;
    drawSpiral(n);
    return 0;
}
