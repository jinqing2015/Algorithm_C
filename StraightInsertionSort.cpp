#include <stdio.h>
void StraightInsertionSort(int num[], int length)
{
	int i,j,temp;
	for(i = 1; i < length; i++){
		if(num[i] < num[i-1]){
			temp = num[i];
			num[i] = num[i-1];
			//元素依次后移 
			for(j = i-2;  j >= 0 && num[j] > temp ; j--)
				num[j+1] = num[j];
			//当移到合适位置后赋值 
			num[j+1] = temp;
		}
	}		
}
void StraightInsertionSort_2(int num[], int length)
{
	int i,j,temp;
	for(i = 1; i < length; i++){
		if(num[i] < num[i-1]){
			temp = num[i];
			//元素依次后移 
			for(j = i-1;  j >= 0 && num[j] > temp ; j--)
				num[j+1] = num[j];
			//当移到合适位置后赋值 
			num[j+1] = temp;
		}
	}		
}
int main()
{
	int a[10] = {1,3,5,7,9,2,4,6,8,0}; 
	int length = 10;
	
	StraightInsertionSort_2(a,length);
	
	for(int i = 0; i < length; i++){
		printf("%d ",a[i]);
	}
	return 0;
}
 