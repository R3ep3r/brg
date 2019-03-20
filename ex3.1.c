#include <stdio.h>

int bisearch(int x, int v[], int n);

int main(void)
{
	int ar[]={2, 4, 6, 7, 9, 10, 12, 13, 15, 25, 35, 45, 55, 67, 100};
	printf("%d", bisearch(9, ar, 10));

	return 0;

}

int bisearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n-1;
	mid = (low + high)/2;

	while(low < high && x != v[mid])
	{
		if (x > v[mid])
			low = mid+1;
		else
			high = mid-1;
		mid = (low+high)/2;
	}

	if (x == v[mid])
		return mid;
	else
		return -1;
}

