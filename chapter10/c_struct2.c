#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];  // char�迭 > ���ڿ�(String)
    int age;        // ����
    double height;  // ����(Ű)
    char *intro;    // �ڱ�Ұ� > ������(�ּ�)
};

int main(void) {
    struct profile yuni; // ������ �ؾ� ����ü ����

    strcpy(yuni.name, "��ü��");    // <string.h>
    yuni.age = 8;
    yuni.height = 50.8;

    // malloc() �Լ�
    //  - �޸� ���� �Ҵ�
    //  - ()�ȿ� ���� Byte �ǹ�
    //  - �ݵ�� free()�� ����

    // ���� �Ҵ�
    //  - �ʿ��� �� �������� �޸𸮸� ���
    yuni.intro = (char*)malloc(80); // intro �����Ϳ� 80Byte �Ҵ� �޸��� �����ּ� ����
    printf("�ڱ�Ұ�: ");
    gets(yuni.intro);

    printf("�̸�: %s\n", yuni.name);
    printf("����: %s\n", yuni.age);
    printf("Ű: %.lf\n", yuni.height);
    printf("�ڱ�Ұ�: %s\n", yuni.intro);
    free(yuni.intro);   // ���� �Ҵ� �޸� ����
}