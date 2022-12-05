/**
 * 기능 제한: 결제 시스템 X
 *           햄버거 1개, 사이드 1개, 음료 1개
 * 
 * 기능 정의
 * 1. 메뉴 출력 기능
 * 2. 소비자 메뉴 선택
 * 3. 선택한 메뉴 저장
 * 4. 주문 > 현재 결과 출력(총액, 메뉴 출력)
 * 5. validation check(값 올바르게 체크)
*/

#include <stdio.h>
#include <string.h>

// 메뉴표 생성
char *burger_name[3] = {"빅맥", "통새우와퍼", "싸이버거"};
char *side_name[3] = {"맥너겟", "치즈스틱", "오징어링"};
char *drink_name[3] = {"코카콜라", "제로콜라", "스프라이트"};

//가격표 생성
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

//고객 주문 기록 저장
char *menu_save[3] = {};    //주문 메뉴
char price_save[3] = {};    //주문 가격

int main() {}