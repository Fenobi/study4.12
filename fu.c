#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int score;
//	printf("������ɼ�\n");
//	scanf("%d", &score);
//		if (score > 100 || score < 0)
//		{
//			printf("������ĳɼ����Ϸ�\n");
//		}
//		else
//		{
//			score /= 10;
//			switch (score)
//			{
//			case 10:
//				printf("����\n");
//			case 9:
//				printf("����\n");
//				break;
//			case 8:
//				printf("����\n");
//				break;
//			case 7:
//				printf("�е�\n");
//				break;
//			case 6:
//				printf("����\n");
//				break;
//			default:
//				printf("������\n");
//				break;
//			}
//		}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	switch (year % 12)
//	{
//	case 6:
//	{
//		printf("����\n");
//		break;
//	}
//	case 7:
//	{
//		printf("����\n");
//		break;
//	}
//	case 8:
//	{
//		printf("����\n");
//		break;
//	}
//
//	case 9:
//	{
//		printf("����\n");
//		break;
//	}
//	case 10:
//	{
//		printf("����\n");
//		break;
//	}
//	case 11:
//	{
//		printf("����\n");
//		break;
//	}
//	case 0:
//	{
//		printf("����\n");
//		break;
//	}
//	case 1:
//	{
//		printf("����\n");
//		break;
//	}
//	case 2:
//	{
//		printf("����\n");
//		break;
//	}
//	case 3:
//	{
//		printf("����\n");
//		break;
//	}
//	case 4:
//	{
//		printf("����\n");
//		break;
//	}
//	case 5:
//	{
//		printf("ţ��\n");
//		break;
//	}
//}
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	char ch = 0;
//	int b = 0;
//	scanf("%d%c%d", &a, &ch, &b);
//	switch (ch)
//	{
//	case '+':
//	{
//		printf("=%d", a + b);
//		break;
//	}
//	case '-':
//	{
//		printf("=%d", a - b);
//		break;
//	}
//	case '*':
//	{
//		printf("=%d", a * b);
//		break;
//	}
//	case '/':
//	{
//		printf("=%d", a / b);
//		break;
//	}
//defaule:
//	{
//		printf("�������\n");
//	}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				printf("%d ", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//void zhishu(int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = a; i <= b; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//
//int main()
//{
//	
//	int a = 0;
//	int b = 0;
//	printf("����a~b֮�������\n������a~b֮�������:>");
//	scanf("%d %d", &a, &b);
//	zhishu(a,b);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	char arr2[] = { 'a','b','c','d','e','f','g' };
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%p\n", &arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%p\n", &arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[][4] = { 1,2,3,4,5,6,7,8 };
//	char arr2[][4] = { 'a','b','c','d','e','f','g' };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p\n", &arr1[i][j]);
//		}
//	}
//	printf("\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p\n", &arr2[i][j]);
//		}
//	}
//	return 0;
//}

int main()
{ 
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	
	return 0;
}