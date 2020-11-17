#include<stdio.h>
int main(){
	int arr[5],b=0,s;
	for (int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	b = arr[0];
	s = arr[0];
	for (int i=0;i<5;i++){
		if(arr[i]>b)
			b = arr[i];
		if(arr[i]<s)
			s = arr[i];
	}	
	
	printf("%d",b+s);
}
	