#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_N 20

int n;
int queens[MAX_N];

bool can_place(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (queens[i] == col || abs(queens[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

void print_board() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (queens[i] == j) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void search(int row) {
    if (row == n) {
        print_board();
        return;
    }
    for (int col = 0; col < n; col++) {
        if (can_place(row, col)) {
            queens[row] = col;
            search(row + 1);
        }
    }
}

int main() {
    printf("Enter the size of the board (up to %d): ", MAX_N);
    scanf("%d", &n);
    if (n < 1 || n > MAX_N) {
        printf("Invalid board size!\n");
        return 1;
    }
    search(0);
    return 0;
}
