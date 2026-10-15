#include <stdio.h>

int counter; //전역변수

void set_counter()
{
    counter = 20;
}
int main(void)
{
    printf("counter=%d\n", counter);
    set_counter();
    printf("counter=%d\n", counter);
    return 0;
}
