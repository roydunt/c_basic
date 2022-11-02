#include <stdio.h>

// 1~10까지 반복하면서 짝수면 짝수출력 홀수면 홀수출력
int main(void) {

    for(int i=1; i<=10; i++) {
        // if(0) → False
        // if(1) → True
        if(i % 2) {    //짝수판별
            printf("짝수\n");
        } else {
            printf("홀수\n");
        }
    }
}