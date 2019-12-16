#include <stdio.h>



int array_sum (int *A, int size){

    int i, sum=0;
    printf("A[] = ");
    for(i=0; i<size; i++) {
        //원소 값 출력 A= A[0]의 주소이다.
        printf("%d ", *A);

        //2가지의 방법이 있다.

        // 1.배열을 이용한 경우
        //sum+=A[i];

        // 2.포인터를 이용한 경우
        sum += *A++;
    }
    //엔터
    printf("\n");
    //총합값 반환
    return sum;
}



void main(){
    int A[10]={1,2,3};
    printf("월급의 합=%d만원", array_sum(A, sizeof(A)/sizeof(A[0])));
}

