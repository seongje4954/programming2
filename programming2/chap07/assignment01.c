/* ���ϸ�: assignment01.c
* ����: ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: ȫ����
* ��¥: 2025.09.10.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void generate_arithmetic_sequence(int arr[], int size, int term, int common_difference) {
    arr[0] = term;
    printf("��������: %d", arr[0]);

    for (int i = 1; i < size; i++) {
        arr[i] = arr[i - 1] + common_difference;
        printf(" %d", arr[i]);
    }
}

void get_user_input(int* term, int* common_difference) {
    printf("ù ��° ��? ");
    scanf("%d", term);
    printf("����? ");
    scanf("%d", common_difference);
}

int main(void) {
    int arr[10];
    int term, common_difference;

    get_user_input(&term, &common_difference);

    generate_arithmetic_sequence(arr, 10, term, common_difference);

    return 0;
}