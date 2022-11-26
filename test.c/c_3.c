#include <stdio.h>

int main(void) {

    int a = 1;
    int b = 0;
    int c = 1;

    for(int i=1; i<=7; i++) {
        printf("%d, ", b);
        a = b + c;
        b = c;
        c = a;
    }
}