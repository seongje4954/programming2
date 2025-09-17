/* 파일명: assignment06.c
* 내용: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.
실수형 배열의 초기값은 마음대로 정하시오.
* 작성자: 홍성제
* 날짜: 2025.09.10.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(float arr[], int size) {
    printf("배열:");
    for (int i = 0; i < size; i++) {
        printf(" %.1f", arr[i]);
    }
}

void print_reverse_array(float arr[], int size) {
    printf("\n역순:");
    for (int i = size - 1; i >= 0; i--) {
        printf(" %.1f", arr[i]);
    }
}

int main() {
    float arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

    print_array(arr, 10);
    print_reverse_array(arr, 10);

    return 0;
}