/*
 * 좌석예약시스템
 * n명의 좌석을 예약하는 시스템
 */

#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5

int main() {
    int s[ROWS][COLS]; // 2차원 배열 선언
    int i, j; // 2개의 인덱스 변수
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            s[i][j] = rand() % 100;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
            printf(" % 02d ", s[i][j]);
        printf("\n");
    }
    return 0;
}
