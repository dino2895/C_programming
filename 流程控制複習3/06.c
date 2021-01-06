#include<stdio.h>
int main(){
	int sum=0,a=0;
	scanf("%d",&a);
	for(int i=a;i>0;i-=2){
		sum=sum+i;
	}
	printf("%d",sum);
}