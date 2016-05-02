#include <stdio.h>

void Merge(int src[], int dest[], int i, int m, int n)
{
	int j,k;
	for(j = m+1, k = i; k <= m && j <= n; i++)
	{
		if(src[j] < src[k]) 
			dest[i] = src[j++];
		else
			dest[i] = src[k++];
	}
	
	while(k <= m)
	{
		dest[i++] = src[k++];		
	} 
	while(j <= n) 
	{
		dest[i++] = src[j++];
	}
}
void MSort(int num_src[],int num_dest[], int length, int i, int j) 
{
	int mid;
	int num_temp[length];
	if(i != j)
	{
		mid = (i + j)/2;
		MSort(num_src, num_temp, length, i, mid);
		MSort(num_src, num_temp, length, mid+1, j);
		Merge(num_temp, num_dest, i, mid, j);	
	}
	else
	{
		num_dest[i] = num_src[j];	
	} 
}
void MergeSort(int num[], int length)
{
	int num_temp[length];
	for(int k = 0; k < length; k++)
	{
		num_temp[k] = num[k];
	}
	
	MSort(num_temp, num, length, 0, length-1);
}
int main()
{
	int a[] = {1,3,5,7,9,2,4,6,8,0};
	int length = 10;
	
	MergeSort(a, length);
	 
	for(int i = 0; i < length; i++)
	{
		printf("%d ", a[i]);
	}
}
