#include <stdio.h>

// ���� ����
//  - ����ڷκ��� ����(0~100��)
//  -91~100 : A
//  -81~90  : B
//  -71~80  : C
//  -61~70  : D
//  -~60    : F

//���α׷� �ۼ�
//1.����ڷκ��� ���� �Է�
//2.if�� ���ؼ� ������ ���� ��� �ο�
//3.���� �� ��� ���

//���α׷� ����
//1.������ 0~100��
//2.0~100�� �ƴ� ���� ���� x

// 1�� ������ ����
//  - ���� 0~100�� ���α׷� ����(2, 3)
//  - ���� 0~100�� �ƴϸ� ���� x(2, 3)

int main(void) {
    //1��: ����ڷκ��� ����
    int score;
    char grade;

    printf("����: ");
    scanf("%d", &score);

    if(score >= 0 && score <= 100) {
        //2��: �����κ��� ��� �Ǵ�
    if(score <= 100 && score >= 91) {           //score: 100��(91~100)
        grade = 'A';
    } else if(score <= 90 && score >= 81) {     //score: 90��(81~90)
        grade = 'B';
    } else if(score <= 80 && score >= 71) {     //score: 80��(71~80)
        grade = 'C';
    } else if(score <= 70 && score >= 61) {     //score: 70��(61~70)
        grade = 'D';
    } else if(score <= 60 && score >= 0) {      //score: 60��(0~60)
        grade = 'F';
    }
    } else {
        //3.���� �� ��� ���
        printf("ERROR: please inter 0~100 score.");
    }
}