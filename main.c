#include <stdio.h>
int array_sum(int *A, int size){
    int i, sum=0;
    for(i=0 ; i<size ; i++){
        sum+=*(A++);
    }
    return sum;

}

int main(void)
{
    int a[] = { 10, 20, 30, 40, 50 };
    printf("%d",array_sum(a,5));
    return 0;
}
