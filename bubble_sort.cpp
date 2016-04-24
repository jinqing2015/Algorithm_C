#include <stdio.h>
void BubbleSort(int num[],int length){
	int i,j,temp;
	
	for(i = 0; i<length; i++){
		int flag = 0;
		for(j = 0; j<length-i+1;j++){
			if(num[j]>num[j+1]){
				flag = 1;	
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
		if(flag == 0)
			return;
	}
}
int main(){
	int a[] = {1,2,7,6,8,9,3};
	BubbleSort(a,7);
	for(int i=0; i<7; i++){
		printf("%d",a[i]);
	}
	printf("\n");	
} 