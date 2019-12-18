
#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[10];
    int number;
    int score;
};

int main(){

    int i;
    struct student list[3];
    FILE *fp=NULL;
    FILE *fp2=NULL;
    FILE *fp3=NULL;
    fp=fopen("studentread.txt","w");
    fp2=fopen("studentread.txt","r");
    fp3=fopen("studentread1.txt","w");
    char buffer1[100];
    if(fp==NULL){
        printf("오류입니다.");
    }
    else
        printf("성공\n");


    fprintf(fp,"학번 이름 점수\n");
    for(i=0;i<3;i++) {
        printf("학번 입력 : ");
        scanf("%d", &list[i].number);
        if(list[i].number<0)
        {
            break;
        }
        printf("이름 점수 입력 : ");
        scanf("%s %d", list[i].name, &list[i].score);
        fprintf(fp,"%d %s %d\n",list[i].number,list[i].name,list[i].score);
    }


    fgets(buffer1,100,fp2);

    for(i=0;i<3;i++) {
        fscanf(fp2, "%d %s %d", &list[i].number, list[i].name, &list[i].score);
        fprintf(fp3,"%s %d",list[i].name,list[i].score+1);
    }
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
}