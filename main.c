#include <stdio.h>
#include <string.h>
//이중포인터 q를 통하여 외부의 포인터 p를 변경
//함수 호출시에 인수들은 복사본이 전달되기때문에 p자체를 변경하려면 p의 주소를 변경해야한다.
void set_proverb(char **q, int n) {
    static char *array[10] = {"A bad shearer never had a good sickle",
                              "A bad workman (always) blames his tools",
                              "A bad workman quarrels with his tools",
                              "A bad thing never dies",
                              "The grass is always greener on the other side of the fence.",
                              "Don’t judge a book by its cover.",
                              " Strike while the iron is hot.",
                              "Too many cooks spoil the broth",
                              "You can’t have your cake and eat it too.",
                              "Many hands make light work"
    };
    //배열은 0원소번호부터 시작하지만 사용자는 n번째를 선택했으니 n-1을 해준다.
    *q = array[n-1];
}
int main() {

    //문자열의 주소를 저장하는 포인터 p
    char *p;
    //사용자가 원하는 n번째 속담
    int n;
    printf("몇 번째 속담을 선택하시겠습니까?  ");
    scanf("%d", &n);
    //포인터 p의 주소를 전달한다.
    set_proverb(&p, n);
    //문자열을 출력하기 위해 문자열의 주소(p)입력
    printf("selected proverb = %s \n", p);

    return 0;
}

