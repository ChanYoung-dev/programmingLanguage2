#include <stdio.h>

struct book {
    int id;
    char author[30];
    char title[100];
};
typedef struct bookT{
    int id;
    char author[30];
    char title[100];
}BOOKT;

int main(void)
{
    struct book s = { 1, "바람과 함께 사라지다", "미가렛 미첼" };
    struct book *p;
    BOOKT bt = { 1, "바람과 함께 사라지다", "미가렛 미첼" };
    p = &s;

    printf("{ %d,%s,%s }\n", s.id, s.author, s.title);
    printf("{ %d,%s,%s }\n", (*p).id,(*p).author,(*p).title);
    printf("{ %d,%s,%s }\n", p->id, p->author, p->title);
    printf("{ %d,%s,%s }\n", bt.id, bt.author, bt.title);
    return 0;
}
