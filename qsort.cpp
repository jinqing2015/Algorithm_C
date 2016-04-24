#include <stdio.h>

int Partition(int num[], int low, int high){
	int piv = num[low];
	while(low < high){
		while(low < high && num[high] >= piv) --high;
		num[low] = num[high];
		while(low < high && num[low] <= piv) ++low;
		num[high] = num[low];
	}
	num[low] = piv;
	return low;
} 
void Qsort(int num[], int low, int high){
	if(low < high){
		int piv = Partition(num, low, high);
		Qsort(num, low, piv-1);
		Qsort(num, piv+1, high);
	}
}
 
int main(){
	int a[] = {1,2,7,6,8,9,3};
	Qsort(a,0,6);
	for(int i=0; i<7; i++){
		printf("%d",a[i]);
	}
	printf("\n");	
} 