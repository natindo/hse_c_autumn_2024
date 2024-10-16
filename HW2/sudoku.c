#include <stdio.h>

#define MAXMATRIX 9
#define MAXSMALLSQUARE 3

enum {
    columnOrRowError = -1,
    smallSquareError = -2
};

int checkSmallSquare(const int smallSquare[MAXSMALLSQUARE][MAXSMALLSQUARE])
{
    int seenNum = 0;
    for (int i = 0; i < MAXSMALLSQUARE; i++) {
        for (int j = 0; j < MAXSMALLSQUARE; j++) {
            const int tempColumnOrRow = 1 << smallSquare[i][j];
            if (tempColumnOrRow & seenNum) {
                return smallSquareError;
            }
            seenNum += 1 << smallSquare[i][j];
        }
    }
    return 0;
}

int checkColumnOrRow(const int columnOrRow[MAXMATRIX])
{
    int seenNum = 0;
    for (int i = 0; i < MAXMATRIX; i++) {
        // bitwise view of digits that have been encountered
        const int tempColumnOrRow = 1 << columnOrRow[i];
        if (tempColumnOrRow & seenNum) {
            return columnOrRowError;
        }
        seenNum += 1 << columnOrRow[i];
    }
    return 0;
}

int checkSudoku(const int board[MAXMATRIX][MAXMATRIX])
{
    int columnOrRow[MAXMATRIX] = { 0 };

    for (int i = 0; i < MAXMATRIX; i++) {
        for (int j = 0; j < MAXMATRIX; j++) {
            columnOrRow[j] = board[i][j];
        }
        if (checkColumnOrRow(columnOrRow) != 0) {
            return columnOrRowError;
        }
    }
    for (int i = 0; i < MAXMATRIX; i++) {
        for (int j = 0; j < MAXMATRIX; j++) {
            columnOrRow[j] = board[j][i];
        }
        if (checkColumnOrRow(columnOrRow) != 0) {
            return columnOrRowError;
        }
    }

    int smallSquareRow[MAXSMALLSQUARE][MAXSMALLSQUARE] = { 0 };

    for (int squareRow = 0; squareRow < 3; squareRow++) {
        for (int squareCol = 0; squareCol < 3; squareCol++) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    smallSquareRow[i][j];
                }
            }
            if (checkSmallSquare(smallSquareRow) != 0) {
                return smallSquareError;
            }
        }
    }
    return 0;
}

int main()
{
    int M[MAXMATRIX][MAXMATRIX] = { 0 };

    for (int i = 0; i < MAXMATRIX; i++) {
        for (int j = 0; j < MAXMATRIX; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    const int resultCheck = checkSudoku(M);
    if (resultCheck != 0) {
        printf("invalid\n");
    } else {
        printf("valid\n");
    }
    return 0;
}

// 6 8 2 1 7 4 9 3 5
// 4 3 7 9 8 5 6 2 1
// 9 5 1 6 2 3 7 8 4
// 8 1 4 2 9 7 3 5 6
// 7 9 6 5 3 1 8 4 2
// 5 2 3 8 4 6 1 9 7
// 2 6 8 4 1 9 5 7 3
// 1 7 9 3 5 2 4 6 8
// 3 4 5 7 6 8 2 1 9
