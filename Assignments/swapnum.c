#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, num, r;
	printf("Enter number of elements in array: \n");
	scanf("%d", &num);
	int arr[num];
	printf("Elements before swapping: \n");
	for(i = 0 ; i < num ; i++)
		scanf("%d",&arr[i]);
	for(i = 0; i < num - 1; i = i + 2)
	{
		r = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = r;
	}
	printf("Elements after swapping: \n");
	for(i = 0; i < num; i++)
		printf("%d", arr[i]);
	return 0;
}
