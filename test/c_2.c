#include <stdio.h>

int main(void) {

    int a;
    int b = 0;

    scanf("%d", &a);

    for(int i=1; i<=a; i++) {
            b = b + 1;
            printf("%d\n", b);
    }
}