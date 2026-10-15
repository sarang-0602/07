#include <stdio.h>
static int all_files; //static 넣으면 main.c에서만 보이는 변수가 되어 sub에서의 컴파일 에러 발생
// undefined reference to `all_files'로 liking error 발생

extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}