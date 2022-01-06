#include "my.h"

#define N 8
#define ABS(x) ((x) < 0 ? -(x) : (x))

void printBoard(int *board) {
    int i = 0;

    while (i < N) {
        my_put_nbr(board[i]);
        i++;
    }
    my_putchar('\n');
    return;
}

int isEmpty(int *board, int i) {
    int j = 0;

    while (j < N && (board[i] != board[j]) && (ABS(board[i] - board[j]) != (i - j)))
        j++;
    return (i == j) ? 1 : 0;
}

void queen(int *board, int *nSolution, int i) {
    board[i] = 0;
    while (board[i] < N) {
        if (isEmpty(board, i)) {
            if (i < N - 1)
                queen(board, nSolution, i + 1);
            else {
                (*nSolution)++;
                printBoard(board);
            }
        }
        board[i]++;
    }
}

int my_8r2() {
    int board[N];
    int nSolution = 0;

    queen(board, &nSolution, 0);
    return 0;
}
