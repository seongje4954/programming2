/* 파일명: assignment04.c
* 내용: 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최대값을 가진 원소와 최소값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램을 작성하시오.
배열의 초기값은 마음대로 정하시오.
* 작성자: 홍성제
* 날짜: 2025.09.10.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_max_min(int arr[], int size, int* max, int* min, int* max_idx, int* min_idx) {
    *max = arr[0];
    *min = arr[0];

    printf("배열:");
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
        if (*max < arr[i]) {
            *max = arr[i];
            *max_idx = i;
        }
        if (*min > arr[i]) {
            *min = arr[i];
            *min_idx = i;
        }
    }
    printf("\n최대값: 인덱스=%d 값=%d", *max_idx, *max);
    printf("\n최소값: 인덱스=%d 값=%d", *min_idx, *min);
}

int main() {
    int arr[10] = { 12, 34, 56, 78, 99, 26, 31, 48, 1, 35 };
    int max, min, max_idx, min_idx;

    find_max_min(arr, 10, &max, &min, &max_idx, &min_idx);

    return 0;
}