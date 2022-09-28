#include <stdio.h>

//scanf()
//  + ?궎蹂대뱶濡쒕???꽣 媛믪쓣 ?엯?젰

//蹂??닔:

int main(void) {
    int age = 4;

    // age 호출 => 4값
    printf("%d", age);  // age 4

    printf("나이: ");
    scanf("%d", &age);  // age변수의 메모리 주소

    printf("%d", age);  // age
}