#include <stdio.h>

void array_print(int *A, int size){

    int i;

    printf("A[] = { ");

    for(i=0; i<size; i++){

        //배열의 마지막 원소일 경우
        if(i==size-1)
            //A의 현재배열 A[i]를 출력하고 i를 증가시킨다. A[i++]와 같다.
            printf("%d", *A++);
        //배열의 마지막 원소를 제외한 원소인 경우
        else
            // 처음 A는 A[0]의 주소이다.
            // *A++로 인해 A[0]에 있는 값을 출력시키고 A[0]에서 A[1]이 된다.
            // 이렇게 반복한다.
            // A의 현재배열 A[i]를 출력하고 i를 증가시킨다. A[i++]와 같다.
            printf("%d, ", *A++);

    }

    printf(" }\n");

}



void main(){

    int A[5]={1,2,3,4,5};
    //size를 절대값으로 정해놨을경우
    //array_print(A, 5);

    //배열의 크기를 유동적으로 바꿀수 있게 코드 수정
    array_print(A, sizeof(A)/sizeof(A[0]));
}