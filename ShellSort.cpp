#include <stdio.h>

#define LENGTH 10
#define DK_LENGTH  3
void ShellInsert(int num[], int length, int dk)
{
	int i,j,temp;
	for(i=dk; i<length; i++)
	{
		if(num[i] < num[i-dk])
		{
			temp = num[i];
			for(j=i-dk; j>=0 && num[j]>temp; j-=dk)
			{
				num[j+dk] = num[j];	
			}
			num[j+dk] = temp;
		}
	}	
}
void ShellSort(int num[], int length, int dk[], int dk_length)
{
	int i;
	for(i = 0; i < dk_length; i++)
	{
		ShellInsert(num, length, dk[i]);
	}	

}
int main()
{
	int a[LENGTH] = {1,3,5,7,9,2,4,6,8,0};
	int dk[DK_LENGTH] = {5,2,1};
	int i;
	
	ShellSort(a, LENGTH, dk, DK_LENGTH);
	
	for(i = 0; i<LENGTH; i++)
		printf("%d ", a[i]);
	return 0;
}