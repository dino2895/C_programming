#include<stdio.h>
int main(){
	int a=0,sum=0;
	scanf("%d",&a);
	while(a!=9999){
		sum=sum+a;
		scanf("%d",&a);
	}
	printf("%d",sum);
}