#include "my.h"

#define N 8
#define ABS(x) ((x) < 0 ? -(x) : (x))

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
            else
                (*nSolution)++;
        }
        board[i]++;
    }
}

int my_8r1() {
    int board[N];
    int nSolution = 0;

    queen(board, &nSolution, 0);
    my_put_nbr(nSolution);
    return 0;
}
