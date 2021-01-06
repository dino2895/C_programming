#include<stdio.h>
int main(){
	int sum=0,n=0,k=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=n;i>0;i-=k){
		sum=sum+i;
		//printf("%d",i*k);
	}
	printf("%d",sum);
}