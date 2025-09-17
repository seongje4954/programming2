/* 파일명: assignment01.c
* 내용: 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
* 작성자: 홍성제
* 날짜: 2025.09.10.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void generate_arithmetic_sequence(int arr[], int size, int term, int common_difference) {
    arr[0] = term;
    printf("등차수열: %d", arr[0]);

    for (int i = 1; i < size; i++) {
        arr[i] = arr[i - 1] + common_difference;
        printf(" %d", arr[i]);
    }
}

void get_user_input(int* term, int* common_difference) {
    printf("첫 번째 항? ");
    scanf("%d", term);
    printf("공차? ");
    scanf("%d", common_difference);
}

int main(void) {
    int arr[10];
    int term, common_difference;

    get_user_input(&term, &common_difference);

    generate_arithmetic_sequence(arr, 10, term, common_difference);

    return 0;
}