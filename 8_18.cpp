#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	int b;
	int c;
	scanf_s("%d%d%d" ,&a, &b, &c);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int arr[10];
//	int arr1[10];
//	int i = 0;
//	int j;
//	scanf_s("%d%d%d", &a, &b, &c);
//	arr[0] = a;
//	arr[1] = b;
//	arr[2] = c;
//	for (i = 0,j=0; i < 10; i++,j++)
//	{
//		if (arr[i] < arr[i + 1])
//			arr1[j] = arr[i + 1];
//		else
//			arr1[j] = arr[i];
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = { '1','2','3','\0'};
//	if (strcmp(arr, "123") == 0)
//		printf("OK");
//	else
//		printf("WRONG");
//	return 0;
//}