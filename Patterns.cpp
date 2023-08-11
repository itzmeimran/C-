#include <iostream>

using namespace std;

// int main()
// {
//     int rows = 5;

//     // Inverted pyramid pattern
//     for (int i = rows; i >= 0; i--)
//     {
//         for (int j = 0; j <= rows - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Pyramid pattern
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int j = 0; j <= rows - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// Hollow diamond

// int main()
// {
//     int rows = 5;
//     // Pyramid pattern
//     for (int i = 0; i <= rows; i++)
//     {

//         // Printing spaces

//         for (int j = 0; j <= rows - i; j++)
//         {
//             cout << " ";
//         }

//         // Printing Asteriks

//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             (k == 0 || k == 2 * i) ? (cout << "*") : (cout << " ");
//         }
//         cout << endl;
//     }

//     // Inverted pyramid pattern
//     for (int i = rows; i >= 0; i--)
//     {

//         // Priting spaces

//         for (int j = 0; j <= rows - i; j++)
//         {
//             cout << " ";
//         }

//         // Printing Asteriks

//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             (k == 0 || k == 2 * i) ? (cout << "*") : (cout << " ");
//         }
//         cout << endl;
//     }
// }

// Flipped solid diamond

int main()
{
    int rows = 5;
    // Pyramid pattern
    for (int i = 0; i <= rows; i++)
    {

        // Printing stars

        for (int j = 0; j <= rows - i; j++)
        {
            cout << "*";
        }

        // Printing spaces

        for (int k = 0; k < 2 * i + 1; k++)
        {
            (k == 0 || k == 2 * i) ? (cout << "*") : (cout << " ");
        }

        // Printing stars

        for (int j = 0; j <= rows - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Inverted pyramid pattern
    for (int i = rows; i >= 0; i--)
    {

        // Priting spaces

        for (int j = 0; j <= rows - i; j++)
        {
            cout << "*";
        }

        // Printing Asteriks

        for (int k = 0; k < 2 * i + 1; k++)
        {
            (k == 0 || k == 2 * i) ? (cout << "*") : (cout << " ");
        }

        // Printing stars

        for (int j = 0; j <= rows - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// Hour glass pattern

// int main()
// {
//     int rows = 5;

//     // Pyramid pattern
//     for (int i = 0; i < rows; i++)
//     {
//         // Printing spaces
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         // Printing asterisks
//         for (int k = 0; k < 2 * (rows - i) - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Inverted pyramid pattern
//     for (int i = rows - 2; i >= 0; i--)
//     {
//         // Printing spaces
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         // Printing asterisks
//         for (int k = 0; k < 2 * (rows - i) - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }