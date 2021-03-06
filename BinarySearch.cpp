#include <stdio.h>
int BinarySearch(int num[],int length, int key)
{
	int low = 0;
	int high = length - 1;
	int mid;
	while(low <= high){
		mid = (low + high)/2;
		if(num[mid] == key) return mid;
		if(num[mid] < key) 
			low = mid + 1;
		else
			high = mid - 1;
	}
	return 0;	
}
int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	printf("index = %d\n",BinarySearch(a,10,7) + 1);
	return 0;
}