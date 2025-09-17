#include <stdio.h>

int  test_print_array();
void print_array_double(double arr[], int sz);
void* swapDouble(double* pa, double* pb);//���漱��
int test_function_pointer();

int main()
{
	test_print_array();

	return 0;
}

int x()
{
	double a = 3.14;
	double b = 5.12;

	double* presult = (double*)swapDouble(&a, &b);
	if (presult == NULL)
	{
		printf("���� �߸��Ǿ���!\n");
	}
	else
	{
		printf("a = %f, b = %f\n", a, b);
	}
	swapDouble(NULL, &b);

	printf("Hello, World\n");
}

void* swapDouble(double* pa, double* pb)
{
	// 1. �Է� �� �������� üũ : NULL�� �ƴϾ�� ��!!
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}

	// 2. swap two values
	double tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return pa;
}

void print_array_double(double arr[], int sz);
void printArrayDouble(double* arr, int sz);

int test_print_array()
{
	double da[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	printArrayDouble(&da[0], size);

	return 0;
}

// ��� : 1���� �Ǽ� �迭�� �Է� �޾� �ֿܼ� ����Ѵ�
// �Լ��� : print_array_double
// �Է� : double Ÿ�� 1���� �迭 �ּ�
// ��� : �͹̳ο� �迭�� ������ ���ڰ� ���
// ��ȯ: ����

void print_array_double(double arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
}
void printArrayDouble(double* arr, int sz)
{
	for (int i = 0; i < sz; i++, arr++)
	{
		printf("%lf ", *arr);
	}
	printf("\n");
}


// ���� ���� ��� ��ȯ
// �Է� : �� �Ǽ�
// ��� : ���� ��
double add(int a, int b)
{
	return a + b;
}

//��� : ���� ����
//�Է� : �� ����
//��� : �� ��
double sub(double a, double b)
{
	return a - b;
}

double mul(double a, double b)
{
	return a * b;
}

int test_function_pointer()
{
	double(*pfunc)(double, double) = NULL;
	double result = 0.0;

	pfunc = add;

	printf("add(3,4)= %f\n", add(3.0, 4.0));

	double result = (*pfunc) (3, 4); // 7.0?
	printf("add(3,4)= %f\n", add(3.0, 4.0));

	pfunc = mul;
	printf("add(3,4)= %f\n", add(3.0, 4.0));
}