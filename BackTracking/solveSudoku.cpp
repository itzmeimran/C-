#include <iostream>

using namespace std;
const int N = 9;

bool isSafe(int sudoku[N][N], int row, int col, int num)
{
    for (int i = 0; i < N; i++)
    {
        if (sudoku[row][i] == num || sudoku[i][col] == num || sudoku[row - row % 3 + i / 3][col - col % 3 + i % 3] == num)
        {
            return false;
        }
    }
    return true;
}

bool solveSudoku(int sudoku[][N])
{
    int row, col;
    bool isEmpty = false;
    // searching for a empty cell
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            if (sudoku[row][col] == 0)
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

    // If no empty cell is found the sudoku puzzle is solved
    if (!isEmpty)
    {
        return true;
    }

    // insert values from 1 to 9 in that empty cell

    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(sudoku, row, col, num))
        {
            sudoku[row][col] = num;
            // recursive fucntion call again
            if (solveSudoku(sudoku))
            {
                return true;
            }

            // If current config doesnt lead to a solution backtrack
            sudoku[row][col] = 0;
        }
    }
    // If any number cannot be filled int the part
    return false;
}

int main()
{
    int sudoku[N][N] = {
        {1, 0, 7, 0, 0, 6, 4, 5, 0},
        {9, 2, 5, 3, 4, 0, 0, 0, 8},
        {0, 6, 0, 0, 0, 1, 0, 7, 0},
        {0, 5, 3, 0, 0, 0, 0, 2, 9},
        {6, 1, 0, 0, 0, 9, 8, 0, 0},
        {0, 0, 0, 6, 0, 2, 0, 0, 7},
        {0, 0, 1, 0, 9, 3, 2, 0, 0},
        {0, 0, 8, 0, 0, 0, 0, 0, 0},
        {0, 4, 0, 0, 7, 8, 5, 9, 1},
    };

    if (solveSudoku(sudoku))
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << sudoku[i][j] << " ";
            }
            cout << endl; 
        }
    }
    else
    {
        cout << "No solution exist" << endl;
    }
    return 0;
}