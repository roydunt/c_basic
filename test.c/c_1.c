#include <stdio.h>

int main(void) {

    int a;

    scanf("%d", &a);

    for(int i=a; i<=10; i++) {
        for(int j=0; j<i; j++) {
            printf("*");
        }
    }
}