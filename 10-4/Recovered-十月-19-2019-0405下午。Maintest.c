#include "slist.h"
#include "Common.h"
#include "SeqQueueCy.h"

#define MAD 8
//void menu()
//{
//	printf("**************************************\n");
//	printf("***[1].push_back     [2].push_front***\n");
//	printf("***[3].show_list    [4].quit_system***\n");
//	printf("***[5].pop_back       [6].pop_front***\n");
//	printf("***[7].insert_pos    [8].insert_val***\n");
//	printf("***[12].sort         [13].reverse  ***\n");
//	printf("**************************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	Slist mylist;
//	SlistInit(&mylist);
//	do
//	{
//		menu();
//		printf("请输入您的选项>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入要插入的数（以-1结尾）:>");
//			while (scanf("%d", &x) && x != -1)
//			{
//				SlistPush_back(&mylist, x);
//			}
//			break;
//		case 2:
//			printf("请输入要插入的数(-1结尾):>");
//			while (scanf("%d", &x) && x != -1)
//			{
//				SlistPush_front(&mylist, x);
//			}
//			break;
//		case 3:
//			ShowList(&mylist);
//			break;
//		case 4:
//			break;
//		case 5:
//			Slistpop_back(&mylist);
//			break;
//		case 6:
//			Slistpop_front(&mylist);
//			break;
//		case 7:
//			break;
//		case 8:
//			break;
//		case 13:
//			SlistReverse(&mylist);
//			break;
//		case 0 :
//			break;
//		default:
//			printf("输入非法,请重新选择:>\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
int main()
{
	SeqQueueCy Q;
	SeqQueueCyInit(&Q,8);
	SeqQueueCyEn(&Q, 1);
	SeqQueueCyEn(&Q, 2);
	SeqQueueCyEn(&Q, 3);
	SeqQueueCyEn(&Q, 4);
	SeqQueueCyShow(&Q);
	return 0;
}