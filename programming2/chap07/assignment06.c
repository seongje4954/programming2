/* ���ϸ�: assignment06.c
* ����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�.
�Ǽ��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
* �ۼ���: ȫ����
* ��¥: 2025.09.10.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(float arr[], int size) {
    printf("�迭:");
    for (int i = 0; i < size; i++) {
        printf(" %.1f", arr[i]);
    }
}

void print_reverse_array(float arr[], int size) {
    printf("\n����:");
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