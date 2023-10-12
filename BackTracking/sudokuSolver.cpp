#include <iostream>
using namespace std;

const int N = 9;

bool isSafe(int grid[N][N], int row, int col, int num)
{
    // Check if 'num' is not already in the current row, current column, and current 3x3 box
    for (int i = 0; i < N; i++)
    {
        if (grid[row][i] == num || grid[i][col] == num || grid[row - row % 3 + i / 3][col - col % 3 + i % 3] == num)
        {
            return false;
        }
    }
    return true;
}

bool solveSudoku(int grid[N][N])
{
    int row, col;

    // Find an empty cell
    bool isEmpty = false;
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            if (grid[row][col] == 0)
            {
                isEmpty = true;
                break;
            }
        }
        if (isEmpty)
        {
            break;
        }
    }

    // If no empty cell is found, the Sudoku puzzle is solved
    if (!isEmpty)
    {
        return true;
    }

    // Try placing numbers from 1 to 9
    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(grid, row, col, num))
        {
            grid[row][col] = num;

            // Recursively solve the rest of the puzzle
            if (solveSudoku(grid))
            {
                return true;
            }

            // If the current configuration doesn't lead to a solution, backtrack
            grid[row][col] = 0;
        }
    }

    // If no number can be placed in the current cell, backtrack
    return false;
}

int main()
{
    int grid[N][N] = {
        {0,6,7,0,0,3,0,5,0},
        {1,0,0,0,0,7,0,0,0},
        {0,0,3,0,0,0,4,0,0},
        {2,0,0,0,9,0,0,0,0},
        {3,5,0,0,0,2,0,0,1},
        {0,7,0,8,4,0,0,3,0},
        {0,4,9,0,0,0,0,0,0},
        {0,8,0,0,0,0,0,0,4},
        {0,0,1,0,0,4,0,2,7},
    };

    if (solveSudoku(grid))
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists.\n";
    }

    return 0;
}
