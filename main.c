
#include <stdio.h>
#include <stdlib.h>


int main(){

    int i;
    int *link=(int*)malloc(2*sizeof(int));
    printf("점수 입력하시오:");

    for(i=0;i<2;i++) {
        printf("학생%d점수입력", i + 1);
        scanf("%d", &link[i]);
    }

    printf("--------------------");
    for(i=0;i<2;i++) {
        printf("학생%d:%d\n",i+1, link[i]);

    }
    free(link);
    return 0;
}