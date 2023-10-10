#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftCheck;
unordered_map<int, bool> lowerLeftCheck;

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    // 3 cheezei check karni hai
    //rowCheck
    if(rowCheck[row] == true){
        return false;
    }
    if(upperLeftCheck[n-1+row-col] == true){
        return false;
    }
    if(lowerLeftCheck[row+col] == true){
        return false;
    }
    // // kia mai current cell per queen raksakta hoon ya nahee
    // int i = row;
    // int j = col;

    // // checking row
    // while (j >= 0)
    // {
    //     if (board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     j--;
    // }

    // // checking upper left diagnol
    // i = row;
    // j = col;

    // while (i >= 0 && j >= 0)
    // {
    //     if (board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }
    // // checking bottom left diagnol
    // i = row;
    // j = col;
    // while (i < n && j >= 0)
    // {
    //     if (board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }
    return true;
}

void printSolution(vector<vector<char>> &board, int n)
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

void solve(vector<vector<char>> &board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printSolution(board, n);
        return;
    }

    // solve one case
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // mark it as 1 ;
            board[row][col] = 'Q';

            // marking true in maps respectively
            rowCheck[row] = true;
            lowerLeftCheck[row + col] = true;
            upperLeftCheck[n -1 + row - col] = true;
            // make a recursive call
            solve(board, col + 1, n);
            // Backtracking
            board[row][col] = '-';
            rowCheck[row] = false;
            lowerLeftCheck[row + col] = false;
            upperLeftCheck[n - 1 + row - col] = false;
        }
    }
}
int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);
    return 0;
}