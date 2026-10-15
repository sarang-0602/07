#include <stdio.h>
void sub(void);

int main(void)
{
    int i;
    for (i = 0; i < 3; i++)
        sub();
    return 0;
}

void sub(void)
{
    int auto_count = 0; // 매번 대입
    static int static_count = 0; //초기화 시키는중(매번 생성은 아니고, 처음에만 실행)
    auto_count++;
    static_count++;
    printf("auto_count=%d\n", auto_count);
    printf("static_count=%d\n", static_count);
}
