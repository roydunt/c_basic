#include <stdio.h>

/**
 * ������(Pointer)�� �迭(Array)
 *  - 
*/

int main(void) {
    int ary[3]; // �迭 ����(3ĭ) ũ��: 12byte
    int i;      // ����           ũ��: 4byte

    // �迭 �̸� > �迭�� ���۹��� ���� �������
    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    puts("3��° �迭 ��� �Է�:");
    scanf("%d\n", ary + 2);

    for(i=0; i<3; i++) {
        printf("%d", *(ary+i));
    }
}