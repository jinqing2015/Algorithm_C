#include <stdio.h>

#define LENGTH 10

void SelectSort(int num[], int length)
{
	for(int i=0; i<LENGTH; i++)
	{
		int min = num[i];
		int temp;
		int min_index = i;
		
		//找出j到LENGTH的最小值	
		for(int j=i; j<LENGTH; j++)
		{
			if(num[j] < min)
			{
				min = num[j];
				min_index = j;
			}
		}
		//swap(num[i], num[min_index]);
		temp   = num[i];
		num[i] = num[min_index];
		num[min_index] = temp;	
	}		
}
int main()
{
	int a[LENGTH] = {
		1,3,5,7,9,2,4,6,8,0
	};
	
	SelectSort(a, LENGTH);
	
	for(int i = 0; i<LENGTH; i++)
		printf("%d ", a[i]);
	return 0;
}