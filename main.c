#include<stdio.h>
#include<stdlib.h>

int main(void){

int size= sizeof(scores) / sizeof(scores[0]);

//배열의 이름 = 배열첫번째요소주소
int a[SIZE] = {1,2,3,4,5}
int b[SIZE];
b=a;
//이건 안된다 a=&a[0]이기때문에 배열첫번째 요소주소이기때문이다.
//for문을 돌려야함


//랜덤 주사위
for(i = 0; i <10000; i++)
{
    //rand()%6 => 0,1,2,3,4,5
}
    ++freq[rand()%6];
}



//배열과 함수
//배열의 크기를 적어주지 않는다.
//원본 배열이 저장된다.
int get_average(int scores[],int size)
{
    //평균구하기
}
main(){
    int scores[5]={0};

    avg = get_average(scores, 5)
}

//원본 배열의 변경을 금지하는 방법
const int a[];

//0x0A0B0C0D
int data = 0x0A0B0C0D;
char *pc;

pc=(*char)&data;
for()
    printf("*(pc+%d)=02%x",i,*(pc+i))


//배열의 초기화
int s[3][5] = {
            {  0,  1,  2,  3,  4 }, // 첫 번째 행의 원소들의 초기값
            { 10, 11, 12, 13, 14 }, // 두 번째 행의 원소들의 초기값
            { 20, 21, 22, 23, 24 } // 세 번째 행의 원소들의 초기값
    };

    int s[][5] = {
                {  0,  1,  2,  3,  4 }, // 첫 번째 행의 원소들의 초기값
              { 10, 11, 12, 13, 14 }, // 두 번째 행의 원소들의 초기값
              { 20, 21, 22, 23, 24 } // 세 번째 행의 원소들의 초기값
    };
    int s[][5] = {
                0,1,2,3,4,5,6,7,8,9,..24// 세 번째 행의 원소들의 초기값
    };
}


//////////포인터/////////////
int *pi = (int *)10000; //10000번지부터 4바이트를 읽음


int *p = NULL;
// 만약 단순히 int *p; 이고 *p=100 이면 p가 가르키는 곳이 중요한 곳이라면  100을 덮어 씌어서 망해버린다


// v = *p++ p가 가르키는 값을 v에 넣고 후에 p의 값을 증가시킴
// v = (*p)++ p가 가르키는 값을 v에 넣고 후에 p가 가르키는 값을 증가
// v = *p++ p를 증가시킨후 증가시킨 pr가 가르치는 값을 v에 저장
// v = ++*p p가 가르치는 값을 증가시키고 증가시킨 값을 v에 저장

//잘못된 예
int a[]={1,2,3,4,5};
a++;
//배열의 이름은 포인터상수임

//올바른 예
int a[]={1,2,3,4,5};
int *p;
p=a;
p[0]=7;
p[1]=8;
p[2]=9;


//포인터의 장점
// 1. 포인터를 이용하면 연결리스트나 이진 트리 등의 향상된 자료구조를 만들수있다.
// 연결리스트는 포인터를 사용하여 메모리에 흩어져 있는 데이터들을 연결하는 자료구조이기 때문에
// 기억장소에서 연속적인 위치를 차지하는 배열과 다르 연결리스트는 물리적으로 흩어져 있는 자료들을 서로 연결할는데 그 때 포인터를 사용한다.
// 2. 메모리 매핑 하드웨어
// 임베디드 시스템에서 포인터를 이용하여 메모리와 같은 방식으 접근할 수 있는 하드웨어 장치에 접근 하는 것이다.로
// 3. 참조에 의한 호출
// 포인터 매개 변수를 통하여 외부의 변수나 배열에 접근하여서 값을 변경 할 수 있음.
// 4. 동적 메모리 할당
// 프로그램이 실행도중에 운영 체제로부터 메모리를 실시간으로 할당 받는 중요한 기법에 사용된다.

//문자열 변경
char str[10] = "Hello";
str[0]='e';
str[1]='e';
str[10]='\0';
//가능

strcpy(str,"world"); //가능
str = "World"; //불가능

char *p="Hello";
strcpy(p,"Goodbye"); //불가능
p="Goodbye"; //가능
p[0]=1; //불가능

//문자열 입출력
char name[100];
scanf("%s",name); //스페이스까지 밖에 안 먹힌다.

gets_s(name,100); //엔터를 만날 때 멈춘다.  끝에는 \n 대신 \0이 들어간다. 성공하면 인수 name이 반환,실패하면 NULL이 반환된다.
puts(name); // 끝에는 \n으로 바뀐다. 성공하면 음수가 아닌 값이 반환,실패하면 EOF값이 반환된다.







isalpha(c); //영문자
isupper(c); //대문자
islower(C); //소문자
isdigit(c); //숫자
isalnum(c); //영문자나 숫자
isxdigit(c); //16진수의 숫자인가
isspace(c); //공백인가
ispunct(c); //구두점 문자인가
isprint(c); //출력가능한 문자
iscntrl(c); //제어 문자
isascii(c); //아스키코드

toupper(c); //대문자로 변환
tolower(c); //소문자로 변환
toascii(c); //아스키코드로 변

strcpy(s1,s2);
strcat(s1,s2); //문자열 연결
strcmp(s1,s2); //문자열 비교 같으면 0, s1이 사전적으로 더 앞에 있으면 음수, s1이 사전적으로 뒤면 양수색
//strchr,strstr 문자열 검색
char s[]="park";
char c='k';
char *p;
p=strchr(s,c); //문자 검색 'k'가 검색된 주소위치를 반환
loc=(int)loc(p-s); // 4
// 문자가 없을시 NULL값 반환

//문자열 토큰 분리
char str[]="what people, who ";
char detect[]=" ,\n\t";
char *token;

int main(void){
    token=strtok(str,detect);

    while(token!=NULL){
        printf("token : ");
        token=strtok(NULL,detect);
    }
    return 0;
}

//문자열 입력
char fruits[3][20];

for()
    scanf("%s",fruits[i]);


//3차원
char dic[5][2][20]={
        {"book","책"},
        {"boy","소년"},
        {"computer","컴퓨터"},
        {"language","언어"},
        {"book","책"},
};













