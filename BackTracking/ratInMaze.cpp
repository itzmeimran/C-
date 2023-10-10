#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[][3], vector<vector<bool>> visited)
{
    if (((i >= 0 && i < row) && (j >= 0 && j < col)) && (arr[i][j] == 1) && (visited[i][j] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solveMaze(int arr[3][3], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    // base case
    if (i == row - 1 && j == col - 1)
    {
        path.push_back(output);
        return;
    }

    // left
    if (isSafe(i, j - 1, row, col, arr, visited))
    {
        visited[i][j - 1] = true;
        solveMaze(arr, row, col, i, j - 1, visited, path, output + 'L');
        // backtracking
        visited[i][j - 1] = false;
    }
    // right
    if (isSafe(i, j + 1, row, col, arr, visited))
    {
        visited[i][j + 1] = true;
        solveMaze(arr, row, col, i, j + 1, visited, path, output + 'R');
        // backtracking

        visited[i][j + 1] = false;
    }
    // Up
    if (isSafe(i - 1, j, row, col, arr, visited))
    {
        visited[i - 1][j] = true;
        solveMaze(arr, row, col, i - 1, j, visited, path, output + 'U');
        // backtracking

        visited[i - 1][j] = false;
    }
    // Down
    if (isSafe(i + 1, j, row, col, arr, visited))
    {
        visited[i + 1][j] = true;
        solveMaze(arr, row, col, i + 1, j, visited, path, output + 'D');
        // backtracking

        visited[i + 1][j] = false;
    }
}

int main()
{
    int maze[3][3] = {
        {1, 0, 0}, {1, 1, 0}, {1, 1, 1}}; // creating maze


    //Handling edge case : 
    if (maze[0][0] == 0)
    {
        cout << "No path exist";
        return 0;
    }

    //initializing rows and cols
    int row = 3;
    int col = 3;

    // creating a visited vector

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    // marking src as true
    visited[0][0] = true;

    // Creating a vector of string for path
    vector<string> path;
    string output = "";
    cout << "size of path before : " << path.size() << endl;

    solveMaze(maze, row, col, 0, 0, visited, path, output);
    cout << "Printing answer" << endl;
    for (auto i : path)

    {
        cout << i << " ";
    }

    cout << endl;
    cout << "size of path : " << path.size() << endl;
    return 0;
}