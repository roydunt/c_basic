#include <stdio.h>

/**
 * ������ 2�� ���
 * 2 x 1 = 2
 * 2 x 2 = 4
 * 2 x 3 = 6
 * ...
 * 2 x 9 = 18
 * i �������� 10����
*/

int main(void){
    for(int i=1; i <=9; i++)
    printf("2 x %d = %d", i, 2 * i);
}