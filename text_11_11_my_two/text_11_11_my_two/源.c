#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//
//void entrain(int line)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-4d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line;
//	printf("Please input the line:");
//	scanf("%d", &line);
//	entrain(line);
//	return 0;
//}
//2.ʹ�ú���ʵ���������Ľ�����
//
//void swap(int*one, int*two)
//{
//	int temp;
//	temp = *one;
//	*one = *two;
//	*two = temp;
//}
//int main()
//{
//	int one = 0;
//	int two = 0;
//	printf("Please input two number(one = and two = ):\n");
//	scanf("one = %d two = %d", &one,&two);
//	swap(&one, &two);
//	printf("After swapping ,the two number is:\none = %d two = %d",one,two);
//	return 0;
//}
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//
//int  is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	int flag = 0;
//	printf("Please input a year:");
//	scanf("%d", &year);
//	flag = is_leap_year(year);
//	if (0 == flag)
//	{
//		printf("The year is not a leap year.");
//	}
//	else if (1 == flag)
//	{
//		printf("The year is a leap year.");
//	}
//	return 0;
//}
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//
//#define SIZE 10
//void menu()
//{
//	printf("-------------------------\n");
//	printf("-------1.init------------\n");
//	printf("-------2.empty-----------\n");
//	printf("-------3.reverse---------\n");
//	printf("-------0.eixt------------\n");
//	printf("-------------------------\n");
//}
//void init(int arr[],int size)
//{
//	int i = 0;
//	printf("Init the array(Please input 10 numbers):\n");
//	for (i = 0; i < size; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("After initting,the array is:\n");
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void empyt(int arr[], int size)
//{
//	int i = 0;
//	for(i = 0;i<size;i++)
//	{
//		arr[i] = 0;
//	}
//	printf("After empyting,the array are:\n");
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int size)
//{
//	int i = 0;
//	int end = size-1;
//	for (i = 0; i <= size / 2; i++)
//	{
//		int temp;
//		temp = arr[i];
//		arr[i] = arr[end];
//		arr[end--] = temp;
//	}
//	printf("After reversing,the array are:\n");
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[SIZE] = { 0 };
//	int input = 0;
//	do
//	{
//		menu();
//		printf("Please input the select:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			init(arr, SIZE);
//			break;
//		case 2:
//			empyt(arr, SIZE);
//			break;
//		case 3:
//			reverse(arr, SIZE);
//			break;
//		case 0:
//			break;
//		default:
//			printf("Input has error.Please input again.\n");
//		}
//	} while (input);
//	return 0;
//}
//5.ʵ��һ���������ж�һ�����ǲ���������
int is_prime(int num)
{
	int i = 0;
	if (num <= 1)
	{
		return 0;
	}
	else if (2 == num)
	{
		return 1;
	}
	else
	{
		for (i = 2; i < num - 1; i++)
		{
			if (0 == num % i)
			{
				return 0;
			}
		}
		return 1;
	}
	
}
int main()
{
	int input = 0;
	int flag = 0;
	printf("Please input a number:");
	scanf("%d", &input);
	flag = is_prime(input);
	if (1 == flag)
	{
		printf("The number is a prime.");
	}
	else if (0 == flag)
	{
		printf("The number is not a prime.");
	}
}