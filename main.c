#include <stdio.h>

#define ROWS 20
#define COLS 40

char canvas[ROWS][COLS];

void initialize() {
    int i, j;
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            canvas[i][j] = '_';
        }
    }
}

void display() {
    int i, j;
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
}

void drawRectangle(int r, int c, int h, int w) {
    int i, j;
    for(i = r; i < r + h; i++) {
        for(j = c; j < c + w; j++) {
            canvas[i][j] = '*';
        }
    }
}

int main() {
    initialize();
    drawRectangle(2, 5, 5, 10);
    printf("2D Graphics Editor Output:\n\n");
    display();
    return 0;
}