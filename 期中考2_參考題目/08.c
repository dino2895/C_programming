#include<stdio.h>
#include<string.h>
int add(int *, int);
int main(){
	int arr_index=0;
	scanf("%d",&arr_index);
	int arr[arr_index];
	for (int i=0;i<arr_index;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",add(arr, sizeof(arr)/sizeof(arr[0])));
}
int add(int* a, int len){
	int index = len;
	//printf("DEBUG index = %d\n", index);
	int sum=0;
	for (int i=0;i<index;i++){
		sum = sum+a[i];
	}
	return sum;
}