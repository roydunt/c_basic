#include <stdio.h>

// 1~10���� �ݺ��ϸ鼭 ¦���� ¦����� Ȧ���� Ȧ�����
int main(void) {

    for(int i=1; i<=10; i++) {
        // if(0) �� False
        // if(1) �� True
        if(i % 2) {    //¦���Ǻ�
            printf("¦��\n");
        } else {
            printf("Ȧ��\n");
        }
    }
}