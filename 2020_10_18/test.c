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
////有序升序数组二分查找
//#include<stdio.h>
//#include<windows.h>
//int BinSearch(int arr[],int num, int x)
//{
//	int left = 0;
//	int right = num - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//先与中间数字进行对比
//		if (x>arr[mid])//如果x>数组下标为mid时，说明x在右边
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
//		printf("找不到\n");
//	}
//	else{
//		printf("数组中%d下标为：%d\n", who, index);
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
//	int times = 3;//初始化
//	while (times)//条件判定
//	{
//		printf("请输入账号：");
//		scanf("%s", name);
//		printf("请输入密码：");
//		scanf("%s", passwd);
//		if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else{
//			printf("输入错误\n");
//		}
//		times--;
//	}
//
//
////方法二：
//	while (1){
//			printf("请输入账号：");
//			scanf("%s", name);
//			printf("请输入密码：");
//			scanf("%s", passwd);
//			if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0){
//				break;
//		}
//			else{
//				times--;
//				printf("输入错误，你有%d次输入机会\n", times);
//				if (times == 0)
//				{
//					printf("输入错误，请%d秒后重新输入\n",3);
//					Sleep(3000);
//					times = 3;  //times机会到0次时，重新恢复到3
//				}
//			}
//	}
//	if (times > 0)
//	{
//		printf("登录成功\n");
//	}
//	system("pause");
//	return 0;
//}



int main()
{
	//演示多个字符向两边汇聚

	char str[] = "hello world,hello bit";
	char lable[] = "#####################";
	int left = 0;
	int right = strlen(str) - 1;
	for (; left <= right; left++, right--)//条件初始化，条件判定，条件更新
	{
		lable[left] = str[left];
		lable[right] = str[right];
		printf("%s\r",lable);
		Sleep(1000);
	}

//倒计时
	int count = 5;

	while (count)
	{
		printf("%d\r", count);
		count--;
		Sleep(1000);
	}

	//| \ - \旋转光标
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


