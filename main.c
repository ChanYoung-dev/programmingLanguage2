//arr[0](첫번째 행)의 합을 구한다.
//arr[1](두번째 행)의 합을 구한다.
//arr[2](세번째 행)의 합을 구한다.
// 각 1차원 배열의 합들을 전부 더 해주어서 2차원 배열의 총합 값을 구한다.
#include <stdio.h>
#include <string.h>
//1차원 배열의 합을 구한다.
//각 행의 열값들의 총합이다.
int get_sum(int array[], int size) {
    int i, sum = 0;
    //열의 값들을 전부 더해준다.
    for(i=0; i<size; i++)
        //i+1번째 열의 값을 sum에 더해준다.
        sum += array[i];
    //결과값 출력
    return sum;
}
int main() {
    int arr[3][6] = {{10,10,10,10,10,10},
                     {10,10,10,10,10,10},
                     {10,10,10,10,10,10}
    };
    int i, sum = 0;
    //첫번쨰부터 세번째 행들의 합을 전부 더 해준다.
    for(i=0; i<3; i++)
        //i+1번째 행의 열값 총합을 sum에 더해준다.
        sum += get_sum(arr[i], sizeof(arr[i]) / sizeof(arr[i][0]));
    printf("정수들의 합 : %d \n", sum);
    return 0;
}
