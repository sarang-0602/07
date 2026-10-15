#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        static int temp = 1; // int temp = 1;만 있을때 초기화를 1로 해라(생성하고 소멸함)
        printf("temp = %d\n", temp);
        temp++;
    }
    return 0;
}
// 예상 출력 temp = 1가 세로로 5줄 출력
// int temp = 1;을 static int temp = 1;로 바꿔서 실행해 보면 1, 2, 3, 4, 5가 출력될 것임
// int temp =1;을 int i아래로 옮기면 1, 2, 3, 4, 5가 출력될 것임
