#include<stdio.h>
int main(){
	int arr[10];
	for (int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<10;i++) {
		for (int j=0;j<i;j++){
			if (arr[j] > arr[i]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i=0;i<10;i++){
		printf("%d",arr[i]);
		if(i<10-1)
			printf(" ");
	}
}
	