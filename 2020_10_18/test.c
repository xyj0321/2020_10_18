#define _CRT_SECURE_NO_WARNINGS
//int main(
//{
//	
//	if (3>4)
//	{
//		int a = 4;
//	}
//	else{
//		printf("%d\n", a);
//	}
//}
////��������������ֲ���
//#include<stdio.h>
//#include<windows.h>
//int BinSearch(int arr[],int num, int x)
//{
//	int left = 0;
//	int right = num - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�����м����ֽ��жԱ�
//		if (x>arr[mid])//���x>�����±�Ϊmidʱ��˵��x���ұ�
//		{
//			left = mid + 1;               //(6+10)/2
//		}
//		else if (x < arr[mid])
//		{
//			right = mid - 1;   //(0+4)/
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int who = 8;
//	int index = BinSearch(arr,num,who);
//	if (-1 == index)
//	{
//		printf("�Ҳ���\n");
//	}
//	else{
//		printf("������%d�±�Ϊ��%d\n", who, index);
//	}
//	system("pause");
//	return 0;
//	
//}

//
//#define NAME  "tom"
//#define PASSWD  "123456"
//int main()
//{
//	char name[64];
//	char passwd[64];
//	
//	int times = 3;//��ʼ��
//	while (times)//�����ж�
//	{
//		printf("�������˺ţ�");
//		scanf("%s", name);
//		printf("���������룺");
//		scanf("%s", passwd);
//		if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else{
//			printf("�������\n");
//		}
//		times--;
//	}
//
//
////��������
//	while (1){
//			printf("�������˺ţ�");
//			scanf("%s", name);
//			printf("���������룺");
//			scanf("%s", passwd);
//			if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0){
//				break;
//		}
//			else{
//				times--;
//				printf("�����������%d���������\n", times);
//				if (times == 0)
//				{
//					printf("���������%d�����������\n",3);
//					Sleep(3000);
//					times = 3;  //times���ᵽ0��ʱ�����»ָ���3
//				}
//			}
//	}
//	if (times > 0)
//	{
//		printf("��¼�ɹ�\n");
//	}
//	system("pause");
//	return 0;
//}



int main()
{
	//��ʾ����ַ������߻��

	char str[] = "hello world,hello bit";
	char lable[] = "#####################";
	int left = 0;
	int right = strlen(str) - 1;
	for (; left <= right; left++, right--)//������ʼ���������ж�����������
	{
		lable[left] = str[left];
		lable[right] = str[right];
		printf("%s\r",lable);
		Sleep(1000);
	}

//����ʱ
	int count = 5;

	while (count)
	{
		printf("%d\r", count);
		count--;
		Sleep(1000);
	}

	//| \ - \��ת���
//	char lable[] = { '|', '/', '-', '\\' };
//	int num = sizeof(lable) / sizeof(lable[0]);
//	int i = 0;
//	while (1)
//	{
//		printf("%c\r", lable[i]);
//		i++;
//		i %= num;
//		Sleep(1000);
//	}
//	show();
	system("pause");
	return 0;
}
//void show()
//{
//	int count = 5;
//	while (count)
//	{
//		printf("%d\r", count);
//		count--;
//		Sleep(1000);
//	}
//}


