//#include "slist.h"
//
//void menu()
//{
//	printf("**************************************\n");
//	printf("***[1].push_back     [2].push_front***\n");
//	printf("***[3].show_list    [4].quit_system***\n");
//	printf("***[5].pop_back       [6].pop_front***\n");
//	printf("***[7].insert_pos    [8].insert_val***\n");
//	printf("**************************************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入您的选项>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1 :
//			break;
//		case 2 :
//			break;
//		case 3 :
//			break;
//		case 4 :
//			break;
//		case 5 :
//			break;
//		case 6 :
//			break;
//		case 7:
//			break;
//		case 8 :
//			break;
//		default:
//			printf("输入非法,请重新选择:>\n");
//			break;
//		} 
//	} while (input);
//	return 0;
//}
#include <stio.h>
bool isValid(char * s)
{
	char *p = s;
	int i = 0;
	char arr[10] = { 0 };
	while (*p != '\0')
	{
		if (*p == '(' || *p == '[' || *p == '{')
			*p = arr[i];
		i++;
		p++;
	}
	p = s;
	while (*p != '\0')
	{
		if ()
	}
}
int main()
{
	char s[] = "{[()]}";
	printf("%s", isValid(s));
	return 0
}
