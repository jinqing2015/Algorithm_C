#include <stdio.h>
void BInsertSort(int num[], int length)
{
	int i,j,temp;
	int low,high;
	for(i = 1; i < length; i++)	
	{
		if(num[i] < num[i-1])
		{
			temp = num[i];
			
			//�۰���� 
			low = 0;
			high = i-1;
			while(low <= high)
			{
				int mid = (low + high)/2;
				if(num[mid] > temp) 
					high = mid - 1;
				else 
					low = mid + 1;	
			} 
			
			//��Ԫ�����κ���
			for(j = i-1; j >= high+1; j--)
				num[j+1] = num[j];
			
			//��Ԫ�ط��� 
			num[high + 1] = temp;
		}
	}
}
int main()
{
	int a[10] = {1,3,5,7,9,2,4,6,8,0}; 
	int length = 10;
	
	BInsertSort(a,length);
	
	for(int i = 0; i < length; i++){
		printf("%d ",a[i]);
	}
	return 0;
}