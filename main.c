#include <stdio.h>
#define SIZE 4
void merge(int *A, int *B, int *C, int size){
    int i, A_state=0, B_state=0;
    //C의 배열 크기만큼 반복
    for(i=0; i<size*2; i++){
        // A배열과 B배열, 두 배열 중 어느 하나도 배열값이 전부 들어가지 않은 경우
        if(A_state<size && B_state<size){
            //현재A배열 원소값과 현재B배열 원소값 비교하여 A배열값이 더 작은경우
            if(A[A_state]<=B[B_state]){
                //현재A배열 원소값을 현재 C배열 원소에 삽입
                C[i]=A[A_state];
                //A배열의 현재상태 원소번호를 증가
                A_state++;
            }
            //현재A배열 원소값과 현재B배열 원소값 비교하여 B배열값이 더 작은경우
            else if(A[A_state]>B[B_state]){
                //현재B배열 원소값을 현재 C배열 원소에 삽입
                C[i]=B[B_state];
                //B배열의 현재상태 원소번호를 증가
                B_state++;
            }
        }
        //A배열의 현재상태 원소번호가 A배열의 끝을 초과한 경우
        //즉, A배열이 C배열에 전부 들어갔을 경우
        //B배열을 C배열 나머지에 넣어준다.
        else if(A_state==size){
            //현재상태 B배열 원소번호에 있는 원소을 C배열의 나머지 원소에 넣어준다.
            C[i]=B[B_state];
            //B배열의 현재상태 원소번호를 증가시킨다.
            B_state++;
        }
        //B배열의 현재상태 원소번호가 B배열의 끝을 초과한 경우
        //즉, B배열이 C배열에 전부 들어갔을 경우
        //A배열을 C배열 나머지에 넣어준다.
        else if(B_state==size){
            //현재상태 A배열 원소번호에 있는 원소을 C배열의 나머지 원소에 넣어준다.
            C[i]=A[A_state];
            //A배열의 현재상태 원소번호를 증가시킨다.
            A_state++;
        }
        //A배열과 B배열의 현재 원소 번호 값이 각 배열의 끝을 초과한 경우
        //A배열과 B배열의 원소들이 다 들어간경우 탈출한다.
    }
}
//배열 출력
void arrange_print(int *A, int size){
    int i;
    for(i=0; i<size; i++){
        //배열의 끝원소출력
        if (i==size-1)	printf("%d \n", A[i]);
        //마지막을 제외한 배열 출력
        else 			printf("%d ", A[i]);
    }
}

void main(){
    int A[SIZE] = {2, 5, 7, 8};
    int B[SIZE] = {1, 3, 4, 6};
    int C[SIZE*2]={0};
    // A와 B 배열들을 합친다.
    merge(A, B, C, SIZE);

    printf("A[] = ");
    arrange_print(A, SIZE);

    printf("B[] = ");
    arrange_print(B, SIZE);

    printf("C[] = ");
    arrange_print(C, SIZE*2);

}

