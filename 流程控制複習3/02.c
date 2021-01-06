#include<stdio.h>
int main(){
	int sum=0,a=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		sum=sum+i;
	}
	printf("%d",sum);
}