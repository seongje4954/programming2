/* ���ϸ�: assignment04.c
* ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ밪�� ���� ���ҿ� �ּҰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�迭�� �ʱⰪ�� ������� ���Ͻÿ�.
* �ۼ���: ȫ����
* ��¥: 2025.09.10.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_max_min(int arr[], int size, int* max, int* min, int* max_idx, int* min_idx) {
    *max = arr[0];
    *min = arr[0];

    printf("�迭:");
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
    printf("\n�ִ밪: �ε���=%d ��=%d", *max_idx, *max);
    printf("\n�ּҰ�: �ε���=%d ��=%d", *min_idx, *min);
}

int main() {
    int arr[10] = { 12, 34, 56, 78, 99, 26, 31, 48, 1, 35 };
    int max, min, max_idx, min_idx;

    find_max_min(arr, 10, &max, &min, &max_idx, &min_idx);

    return 0;
}