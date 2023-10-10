#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> leftUpperDiag;
unordered_map<int, bool> bottomLeftDiag;

// Is Safe function
bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{
    if (rowCheck[row] == true || leftUpperDiag[row + col] == true || bottomLeftDiag[n - 1 + col - row] == true)
    {
        return false;
    }
    return true;
}

// Printing solution
void printSol(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Solving function
void solve(vector<vector<char>> &board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printSol(board, n);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            rowCheck[row] = true;
            leftUpperDiag[row + col] = true;
            bottomLeftDiag[n - 1 + col - row] = true;
            solve(board, col + 1, n);
            board[row][col] = '-';
            rowCheck[row] = false;
            leftUpperDiag[row + col] = false;
            bottomLeftDiag[n - 1 + col - row] = false;
        }
    }
}

int main()
{
    int n = 5;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);
    return 0;
}

