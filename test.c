#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1!+2!+3!����10!
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int j = 1;
//	int sum = 0;
//	for (j = 1; j <= 10; j++)
//	{
//		int ret = 1;
//		for (n = 1; n <= j; n++)
//		{
//			ret *= n;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	scanf("%d", &j);
//	for (n = 1; n <= j; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	printf("��ȷ�����룺(Y/N)\n");
//	getchar();
//	int ch = getchar();
//	if (ch  == 'Y')
//		printf("����ɹ�\n");
//	else
//		printf("����ʧ��\n");
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while((ch = getchar())!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);;
//	}
//	return 0;
//}

// I feel very odd !


//n�Ľ׳�
//int main()
//{
//	int sum = 1;
//	int n = 0;
//	scanf("%d",& n);
//	do
//	{
//		sum *= n;
//		n -= 1;
//	} while (n > 0);
//	printf("%d", sum);
//	return 0;
//}



//����1!+2!+3!����n��
//int main()
//{
//	int Sum = 0;
//	int sum = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int i = n;
//	for (i = i; i > 0; i -= 1)
//		n = i;
//	do
//	{
//		sum *= n;
//		n -= 1;
//	} while (n > 0);
//	{Sum += sum;
//}
//		
//	printf("%d", Sum);
//	return 0;
//}


//int main()
//{
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",& n);
//	for(;;)
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}





//�������в���һ������λ��
//int main()
//{
//	int j = 0;
//	scanf("%d", &j);
//	int m[] = { 0,2,3,4,5,6,7,8,9,10 };
//	int num = sizeof(m) / sizeof(m[0]);
//	int left = 0;
//	int right = num - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (m[mid] < j)
//		{
//			left = mid + 1;
//		}
//		else if (m[mid] > j)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("���ҵ�����[%d]��", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("δ���ҵ�����");
//	}
//	return 0;
//}


//��̬"WELCOME TO EMPIRE OF DODO"
//#include <windows.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "WELCOME TO EMPIRE OF DODO!!!";
//	char arr2[] = "############################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(400);//˯��1��
//		system("cls");//�����Ļ
//	}
//	printf("%s", arr2);
//	return 0;
//}




//�����������Σ����������˳�
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	printf("����������:");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ��\n");
//				break;
//		}
//		else
//		{
//			if (i < 2)
//			{
//				printf("����������������룡\a\n");
//			}
//			else
//			{
//				printf("�������\a\n");
//			}
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}



int main()
{
	switch (1)
	{
	case 3:printf("3");
	case 1:printf("1");
	case 0:printf("0");
		break;
	case 2:printf("2");
	}
	return 0;
}