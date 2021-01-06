#include<stdio.h>
int main(){
	int sum=0,a=0;
	scanf("%d",&a);
	for(int i=2;i<=a;i+=2){
		sum=sum+i;
	}
	printf("%d",sum);
}