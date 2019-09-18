/*
 * 좌석예약시스템
 * n명의 좌석을 예약하는 시스템
 */

#include <stdio.h>
#define SIZE 11

int main() {
    char ans1; //좌석을 예약할지 안할지
    char seatnumber; //좌석번호
    int num; //몇명을 예약할지
    int i,j;
    int seats[SIZE] = { 0 };
    int sum=0;
    while (1) {
        printf("좌석 예약 하시겠습니까?(y/n)");
        scanf(" %c", &ans1);
        //좌석예약을 안할시 종료
        if (ans1 == 'n')
            break;
        else if(ans1=='y') {
            printf("몇명의 좌석을 예약하십니까?");
            scanf(" %d", &num);
            //좌석 실제 예약 num명을 예약하니 num만큼 반복문을 돌린다.
            for(j=0;j<num;j++) {
                while (1) {
                    //좌석 UI
                    printf("--------------------\n");
                    printf("1 2 3 4 5 6 7 8 9 10\n");
                    printf("--------------------\n");
                    for (i = 1; i < SIZE; i++)
                        printf("%c ", seats[i]);
                    //원하는 좌석입력
                    printf("\n%d번째 원하는 좌석번호를 입력하세요:", j + 1);
                    scanf("%d", &seatnumber);
                    //좌석이 비었을 경우
                    if (seats[seatnumber] == 0) {
                        seats[seatnumber] = '*';
                        printf("예약되었습니다.\n");
                        //총 예약된 좌석수 증가
                        sum += 1;
                        break;
                    }
                    //예약을 원하는 자리가 이미 예약된 경우
                    else
                        printf("이미 예약되어있습니다. 다른 좌석을 선택해주세요.\n");
                }
                printf("현재 예약된 인원 : %d\n", sum);
            }
        }
        else
            printf("잘못된 입력입니다.\n");
    }
    return 0;
}
