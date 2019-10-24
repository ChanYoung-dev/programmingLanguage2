#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    // 크기가 50인 char형 배열선언
    char str[50];
    //반복 변수 선언
    int i=0;
    //문자열 입력
    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    //저장한 문자열 출력
    printf("%s\n", str);
    //숫자 검색
    for(i=0;i<strlen(str);i++) {
        if (str[i] >= '0' && str[i] <= '9')
            printf("%c", str[i]);  // 숫자 출력
    }
    return 0;
}