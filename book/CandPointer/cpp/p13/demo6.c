#include <stdio.h>

int compare(void *a, void *b)
{

	int x = *(int *)a, y = *(int *)b;
	if(x == y)  return 0;
	if(x > y)   return 1;
	if(x < y)   return -1;
}

void _qsort(int *a, int n, int (*_compare)(void *, void *))
{

	// bubble_sort
	for(int i = 0; i < n - 1; i ++ )
	{

		for(int j = 0; j < n - 1 - i; j ++ )
		{

			// 由于a[i]不属于指针，所以要传递地址
			if(compare(&a[j], &a[j + 1]) == 1) // a[j] > a[j + 1]
			{

				int t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
}

int main()
{

	int a[] = {
		2, 4, 0, 7, 2, 1, 7, 5, 7, 6};
	int n = sizeof(a) / sizeof(a[0]);
	printf("size: %d\n", n);
	_qsort(a, n, compare);
	printf("array: ");
	for(int i = 0; i < n; i ++ )    printf("%d ", a[i]);
	puts("");

	return 0;
}
