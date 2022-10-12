#include <stdio.h>

// 학점 계산기
//  - 사용자로부터 점수(0~100점)
//  -91~100 : A
//  -81~90  : B
//  -71~80  : C
//  -61~70  : D
//  -~60    : F
int main(void) {
    int score;
    char grade;

    printf("점수: ");
    scanf("%d", &score);

    if(score >= 0 && score <= 100) {
        // 점수: 0~100점
    if(score <= 100 && score >= 91) {
        grade = 'A';
    } else if(score <= 90 && score >= 81) {
        grade = 'B';
    } else if(score <= 80 && score >= 71) {
        grade = 'C';
    } else if(score <= 70 && score >= 61) {
        grade = 'D';
    } else if(score <= 60 && score >= 0) {
        grade = 'F';
    }
    } else {
        // 점수: 0점 미만 또는 100점 초과
        printf("ERROR: please inter 0~100 score.");
    }
}