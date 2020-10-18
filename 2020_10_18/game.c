#define _CRT_SECURE_NO_WARNINGS
//#include"game.h"
//void menu()
//{
//	printf("******************************\n");
//	printf("***1.enter***********2.exit***\n");
//	printf("******************************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入数字：>");
//		scanf("%d", &input);
//		if (input > random_num){
//			printf("猜大了\n");
//		}
//		else if (input < random_num){
//			printf("猜小了\n");
//		}
//		else{
//			int count = 5;
//			while (count)
//			{
//				printf("%d\r", count);
//				count--;
//				Sleep(1000);
//			}
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}