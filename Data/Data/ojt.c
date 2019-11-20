//找到链表倒数第k个节点
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
	{
		if (pListHead == NULL)
			return NULL;
		ListNode *p = pListHead;
		ListNode *q = p;
		for (int i = k; i > 0; --i)
		{
			if (p == NULL)
				return NULL;
			p = p->next;
		}
		while (p != NULL)
		{
			p = p->next;
			q = q->next;
		}
		return q;
	}
};