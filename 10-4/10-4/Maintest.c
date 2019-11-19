#include "slist.h"
#include "Common.h"
#include "SeqQueueCy.h"
#include "bintree.h"
#include "heap.h"

//������һ���������������Hash��Hash��Ĵ洢��λ��ΪͰ��
//ÿ��Ͱ�ܷ�3����������һ��Ͱ��Ҫ�ŵ�Ԫ�س���3��ʱ��
//��Ҫ���µ�Ԫ�ش�������Ͱ�У�ÿ�����ͰҲ�ܷ�3��Ԫ�أ�
//������Ͱʹ��������������Hash��Ļ�Ͱ��ĿΪ����P��
//Hash���hash������Pȡģ�����붨�����£�

#define P 7
#define NULL_DATA -1
typedef struct bucket_node
{
	int data[3];
	struct bucket_node *next;
}bucket_node;
struct bucket_node hash_table[P];

//���ڼ���hash_table�Ѿ���ʼ�����ˣ�
//insert_new_element()����Ŀ���ǰ�һ���µ�ֵ����hash_table�У�
//Ԫ�ز���ɹ�ʱ����������0�����򷵻�-1����ɺ�����
int flag = 0;
int i = 1;
int insert_new_element(int new_element)
{   
	if (flag < 4)
	  hash_table[new_element % 7].data[flag % 4] = new_element;
	struct bucket_node *p = (bucket_node*)malloc(sizeof(bucket_node));
	hash_table[new_element % 7].next = p;
	flag++;

}
////////////////////////////////////////////////
int main()
{
	Init_bucket_node(); //
	int array[] = { 15, 14, 21, 87, 96, 293, 35, 24, 149, 19, 63, 16, 103, 77, 5, 153, 145, 356, 51, 68, 705, 453 };
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		Insert_new_element(array[i]);
	}
	return 0;
}


//int main()
//{
//	int arr[9] = {43,32,12,43,35,44,2,12,45,};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(int)-1;
//	TwoWayInsertSort(arr,5,5);
//	return 0;
//}
#include "sort.h"
#define MAD 8


//
//int main()
//{
//	int arr[] = {27,15,19,18,28,34,65,49,25,37};
//	int n = sizeof(arr) / sizeof(int);
//	Heap hp;
//	HeapInit(&hp,n);
//	return 0;
//}
//int main()
//{
//	BinTree bt,bt1;
//	int i = 0, j = 0;
//	char *str = "ABC##DE##F##G#H##";
//	char *str1 = "ABC##D#F##GE##H##";
//	char *lvr = "CBEDFAGH";
//	char *lrv = "CEFDBHGA";
//	int n = strlen(lvr);
//	BinTreeInit(&bt);
//	BinTreeInit(&bt1);
//	//BinTreeCreate(&bt);//BinTreeCreate_1;
//	//BinTreeCreate_2(&bt);
//	BinTreeCreateBystr(&bt, str, &i);
//	//BinTreeCreateBystr(&bt1, str1, &j);
//	BinTreeCreateBy_LVR_LRV(&bt, lvr,lrv,n);
//
//	printf("VLR:>");
//	PreOrder(&bt);
//	printf("\n");
//	printf("LVR:>");
//	InOrder(&bt);
//	printf("\n");
//	printf("LRV:>");
//	PostOrder(&bt);
//	printf("\n");
//	printf("%d\n",Size(&bt));
//    Find(&bt,'F');
//	Parent(&bt,'F');
//
//	return 0;
//}
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
//		printf("����������ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������Ҫ�����������-1��β��:>");
//			while (scanf("%d", &x) && x != -1)
//			{
//				SlistPush_back(&mylist, x);
//			}
//			break;
//		case 2:
//			printf("������Ҫ�������(-1��β):>");
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
//			printf("����Ƿ�,������ѡ��:>\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	SeqQueueCy Q;
//	SeqQueueCyInit(&Q,8);
//	SeqQueueCyEn(&Q, 1);
//	SeqQueueCyEn(&Q, 2);
//	SeqQueueCyEn(&Q, 3);
//	SeqQueueCyEn(&Q, 4);
//	SeqQueueCyShow(&Q);
//	return 0;
//}