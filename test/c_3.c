#include <stdio.h>

int main(void) {

    int a = 1;
    int b = 1;
    int c = 2;

    printf("%d ", a);
    printf("%d ", b);

    for(int i=1; i<=5; i++) {
        printf("%d ", c);
        a = b + c;
        b = c;
        c = a;
    }
}