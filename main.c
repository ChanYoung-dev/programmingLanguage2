/*
 * 좌석예약시스템
 * 두명 or 한명만 예약가능한 좌석예약시스템
 *
 */
#include <stdio.h>
#define SIZE 11

int main() {
    char ans1;
    char ans2;
    char ans3;
    char ans4;
    int i;
    int seats[SIZE] = { 0 };
    int sum=0;

    while (1) {

        printf("좌석 예약 하시겠습니까?(y/n)");
        scanf(" %c", &ans1);
        // 좌석 예약을 원하지 않는경우
        if (ans1 == 'n')
            break;
        //좌석 예약을 원하는 경우
        else if(ans1=='y') {
            //두명 좌석을 예약할지, 한명을 좌석 예약할지 결정
            printf("두명의 좌석을 원하시면 Y, 한명의 좌석을 원하시면 N을 눌러주세요");
            scanf(" %c", &ans3);



            printf("--------------------\n");
            printf("1 2 3 4 5 6 7 8 9 10\n");
            printf("--------------------\n");



            for (i = 1; i < SIZE; i++)
                printf("%c ", seats[i]);

            //두명좌석일경우
            if(ans3=='y')
            {
                printf("첫번째 원하는 좌석번호를 입력하세요:");
                //첫번째 좌석번호 = ans2
                scanf("%d", &ans2);
                if (seats[ans2] == 0) {
                    seats[ans2] = '*';
                    printf("예약되었습니다.\n");
                    sum += 1;
                } else
                    printf("이미 예약되어있습니다. 다른 좌석을 선택해주세요.\n");
                //두번쨰 좌석번호 = ans4
                printf("두번째 원하는 좌석번호를 입력하세요:");
                scanf("%d", &ans4);
                if (seats[ans4] == 0) {
                    seats[ans4] = '*';
                    printf("예약되었습니다.\n");
                    sum += 1;
                } else
                    printf("이미 예약되어있습니다. 다른 좌석을 선택해주세요.\n");

            }
            //한명만 좌석예약할경우
            else {
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
        }
        else
            printf("잘못된 입력입니다.\n");
    }

    return 0;
}
