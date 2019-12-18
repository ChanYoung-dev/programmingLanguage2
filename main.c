
#include <stdio.h>
#include <string.h>

struct student{
    char name[10];
    int number;
    int score;
};

int main(){
    struct student list[]={
            {"chan",20131000,99},
            {"seong",20122000,84},
            {"minsoo",2011111,23}
    };


    int max_score,i;
    max_score=list[0].score;
    for(i=1;i<(sizeof(list)/sizeof(list[0]));i++){
        if(max_score<list[i].score)
            max_score=list[i].score;

    }
    printf("%d",max_score);
    return 0;
}