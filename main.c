//score[0](첫번째 행)의 평균값을 구한다. 첫번째 학생의 점수 평균값이다.
//socre[1](두번째 행)의 평균값을 구한다. 두번째 학생의 점수 평균값이다.
//score[2](세번째 행)의 평균값을 구한다. 세번째 학생의 점수 평균값이다.
// 각각의 평균값을 출력한다.
#include <stdio.h>
#include <string.h>
#define STUDENT 3
#define SUBJECT 6
//배열 출력
//2차원 배열 인자로 받을 땐 score[][X]처럼 뒤에 숫자를 넣어줘야한다.
void score_print(int arr[][SUBJECT]) {
    int i, j;
    //전체 학생 점수 출력
    for(i=0; i<STUDENT; i++) {
        //i+1번째 학생의 점수 출력
        for(j=0; j<SUBJECT; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}
//한명의 학생의 점수 평균값 구하기
double get_average(int list[], int n) {
    int i;
    //점수의 총합
    double sum = 0;
    //n개의 점수를 sum에 전부 더해준다.
    for(i=0; i<n; i++)
        //i+1번째 과목점수를 sum에 더해준다.
        sum += list[i];
    // 총점수/과목수 = 평균값
    return ( sum / n );
}
int main() {
    // 점수를 임의로 정해준다.
    //첫번째 행은 첫번째 학생의 점수들
    //두번째 행은 두번째 학생의 점수들
    //세번째 행은 세번째 학생의 점수들이다.
    int scores[STUDENT][SUBJECT]= {{40,20,60,50,52,37},
                                {100,99,45,13,56,67},
                                {100,20,67,33,66,75}
    };
    int i, size;
    //2차원배열을 출력한다.
    //각 학생의 점수를 출력
    score_print(scores);
    // 전체 학생의 점수 평균값을 출력
    // 한명씩 점수를 보여주는 것을 STUDENT(4명)씩 반복하여 전체를 보여준다.
    for(i=0; i<STUDENT; i++)
        //한명의 점수 평균값을 보여준다.
        printf(" 학생%d의 평균 : %.1f \n", i+1, get_average(scores[i], sizeof(scores[i]) / sizeof(scores[i][0])));

    return 0;
}
