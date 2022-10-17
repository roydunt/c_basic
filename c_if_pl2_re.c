#include <stdio.h>

// 학점 계산기
//  - 사용자로부터 점수(0~100점)
//  -91~100 : A
//  -81~90  : B
//  -71~80  : C
//  -61~70  : D
//  -~60    : F

//프로그램 작성
//1.사용자로부터 점수 입력
//2.if문 통해서 점수에 따른 등급 부여
//3.점수 및 등급 출력

//프로그램 조건
//1.점수는 0~100점
//2.0~100점 아닌 경우는 실행 x

// 1번 무조건 실행
//  - 점수 0~100점 프로그램 실행(2, 3)
//  - 점수 0~100점 아니면 실행 x(2, 3)

int main(void) {
    //1번: 사용자로부터 점수
    int score;
    char grade;

    printf("점수: ");
    scanf("%d", &score);

    if(score >= 0 && score <= 100) {
        //2번: 점수로부터 등급 판단
    if(score <= 100 && score >= 91) {           //score: 100점(91~100)
        grade = 'A';
    } else if(score <= 90 && score >= 81) {     //score: 90점(81~90)
        grade = 'B';
    } else if(score <= 80 && score >= 71) {     //score: 80점(71~80)
        grade = 'C';
    } else if(score <= 70 && score >= 61) {     //score: 70점(61~70)
        grade = 'D';
    } else if(score <= 60 && score >= 0) {      //score: 60점(0~60)
        grade = 'F';
    }
    } else {
        //3.점수 및 등급 출력
        printf("ERROR: please inter 0~100 score.");
    }
}