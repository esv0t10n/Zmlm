#include "stdio.h"
#include "stdlib.h"
#include "user_math.h"

int SumOfElements(int* tbl, int size) 
{
	int i;
	int sum = 0;
	for (i = 0; i < size; i++) {
		sum += (*tbl);
		tbl++;
	}
	return sum;
}

void MOVE_Matrix(void) 
{
	int matrix[X_LENTH][Y_LENTH] = { 0 };
	u8 xAxisLen;
	u8 yAxisLen;

	for (int a = 0; a < X_LENTH; a++) {
		for (int b = 0; b < Y_LENTH; b++) {
			matrix[a][b] = rand() % 10;
		}
	}

	xAxisLen = sizeof(matrix) / sizeof(matrix[0]);
	yAxisLen = sizeof(matrix[0]) / sizeof(int);
	for (u8 i = 0; i < xAxisLen; i++) {
		for (int j = 0; j < yAxisLen; j++) {
			printf("[%d]  ", *(*(matrix + i) + j));
			if ((j == yAxisLen - 1) && (i != xAxisLen - 1)) {
				printf("\n");
			}
		}
	}
}

void OperatePointer(void)
{
	int lenth;
	int a[X_LENTH][Y_LENTH] = {0};
	int* p = (int*)a;

	p[0] = -99;
	lenth = sizeof(a);
	printf("the size of a is %d\n", lenth);

	for (int i = 0; i < (X_LENTH * Y_LENTH); i++)
	{
		if (i > 0) {
			p[i] = p[i - 1] + 2;
			printf("%d ", p[i]);
			if (((i + 1) % Y_LENTH) == 0) {
				printf("\n");
			}
		} else {
			printf("%d ", p[0]);
		}

	}
}

void VOS_MemoryUsePractice(void)
{
	u8 i;
	u8 length;
	char array[] = "Hello World!";
	printf("the size of arr is %d\n", MATH_ARRAY(array));
	length = MATH_ARRAY(array) - 2;
	
	char* arr = (char*)calloc(length, sizeof(char));
	if (arr == NULL) {
		return;
	}
	free(arr);
}

void main(void) 
{

}