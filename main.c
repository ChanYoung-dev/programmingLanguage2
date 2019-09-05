/*
 * 극장 티켓 예매하기
 * 예약된 좌석보여주기
 * 
 *
 */

#include <stdio.h>
#define SIZE 11

int main() {
    char ans1;
    char ans2;
    int i;
    int seats[SIZE] = { 0 };
    int sum=0;

    while (1) {

        printf("좌석 예약 하시겠습니까?(y/n)");
        scanf(" %c", &ans1);

        if (ans1 == 'n')
            break;
        else if(ans1=='y') {


            printf("--------------------\n");
            printf("1 2 3 4 5 6 7 8 9 10\n");
            printf("--------------------\n");

            for (i = 1; i < SIZE; i++)
                printf("%c ", seats[i]);


            printf("\n예약좌석번호를 입력하세요:");
            scanf("%d", &ans2);


            if (seats[ans2] == 0) {
                seats[ans2] = '*';
                printf("예약되었습니다.\n");
                sum += 1;
            } else
                printf("이미 예약되어있습니다. 다른 좌석을 선택해주세요.\n");


            printf("예약된 좌석 갯수:%d \n", sum);
        }
        else
            printf("잘못된 입력입니다.\n");
    }

    return 0;
}