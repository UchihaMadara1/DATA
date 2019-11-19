//移除链表元素

}/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val)
{
	if (head == NULL)
		return NULL;
	struct ListNode *p = head;
	struct ListNode *q = p->next;
	while (q != NULL)
	{
		while (q != NULL&&q->val != val)
		{
			q = q->next;
			p = p->next;
		}
		if (q != NULL)
		{
			p->next = q->next;
			free(q);
			q = p->next;
		}
	}
	p = head;
	while (p != NULL && p->val == val)
	{
		q = p->next;
		head = head->next;
		free(p);
		p = q;
	}
	return head;
}
//反转一个链表
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* reverseList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode *p = head->next;
	struct ListNode *s = p;
	head->next = NULL;
	while (p != NULL)
	{
		s = s->next;
		p->next = head;
		head = p;
		p = s;
	}
	return head;
}
//链表中的中间节点（偶数返回n/2 + 1 ）
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* middleNode(struct ListNode* head)
{
	if (head == NULL)
		return NULL;
	struct ListNode *ans = head;
	struct ListNode *an = head;
	while (an != NULL&& an->next != NULL)
	{
		ans = ans->next;
		an = an->next->next;
	}
	return ans;
}