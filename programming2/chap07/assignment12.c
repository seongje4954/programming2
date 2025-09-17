﻿﻿/* 파일명: assignment12.c
* 내용: 기차표 예매 프로그램을 작성하려고 한다.
간단한 구현을 위해 좌석은 모두 10개라고 하자.
예매할 좌석수를 입력받아 빈 자리를 할당한다.
예매할 마다 각 좌석의 상태를 출력한다.
O이면 예메 가능, X는 예매 불가를 위미한다.
더 이상 예매할 수 없으면 프로그램을 종료한다.
* 작성자: 홍성제
* 날짜: 2025.05.31.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

    void print_seats(int arr[], int size) {
    printf("현재 좌석: [");
    for (int i = 0; i < size; i++) {
        printf(arr[i] == 0 ? " O" : " X");
    }
    printf(" ]\n");
}

void book_seats(int arr[], int size) {
    int select;
    while (arr[size - 1] == 0) {
        print_seats(arr, size);
        printf("예매할 좌석수? ");
        scanf("%d", &select);

        for (int i = 0; i < size && select > 0; i++) {
            if (arr[i] == 0) {
                arr[i] = 1;
                printf("%d ", i + 1);
                select--;
            }
        }
        printf("번 좌석을 예매했습니다.\n");
    }
}

int main() {
    int arr[10] = { 0 };
    book_seats(arr, 10);
    return 0;
}