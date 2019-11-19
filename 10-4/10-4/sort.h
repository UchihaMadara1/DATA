#ifndef _SORT_H_
#define _SORT_H_

void TwoWayInsertSort(int *ar, int left, int right);
void TwoWayInsertSort(int *ar, int left, int right)
{
	int arr[9] = { 0 };
	int mid = left;
	arr[left] = *ar;
	if (*(ar + 1) > arr[mid])
	{
		right++;
		arr[right]  = *(ar + 1);
	}
	else if (*(ar + 1) < arr[])
}





#endif