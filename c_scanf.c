#include <stdio.h>

//scanf()
//  + ?��보드로�???�� 값을 ?��?��

//�??��:

int main(void) {
    int age = 4;

    // age ȣ�� => 4��
    printf("%d", age);  // age 4

    printf("����: ");
    scanf("%d", &age);  // age������ �޸� �ּ�

    printf("%d", age);  // age
}