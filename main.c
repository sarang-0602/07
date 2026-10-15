#include <stdio.h>
void f(void);

int i;              

int main(void)
{
    for (i = 0; i < 5; i++)
    {
        f();
    }
    return 0;
}

void f(void)
{
    int i; // 50개 출력하기 위해서는 지역변수 따로 또 설정
    for (i = 0; i < 10; i++)
        printf("#");
}