#include <stdio.h>

int inc(int counter);

int main(void)
{
    int i = 10; // int i;로 실행하면 쓰레기값 출력됨
    printf("function call before i=%d\n", i);
    i = inc(i); // (10/10)로 출력하기 위해선 inc(i);만 실행하면 되지만, (10/11)로 출력하기 위해선 i = inc(i);로 받아야함
    printf("function call after i=%d\n", i);
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}

