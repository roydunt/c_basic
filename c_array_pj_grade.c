#include <stdio.h>

//배열은 값을 여러 개 담음 > 전체 출력 > 반복문(for)
int main(void) {
    int score[5];
    int total = 0;
    double avg;

    for(int i=0; i<5; i++) {
        printf("%d: ", i);
        scanf("%d", &score[i]);
    }
    for(int i=0; i<5; i++) {
        total += score[i];
    }
    avg = total / 5.0;
    printf("평균 점수: %.1lf", avg);
}