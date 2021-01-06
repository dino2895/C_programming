#include<stdio.h>
int main(){
	int a=0,sum=0;
	for(;;){
		scanf("%d",&a);
		if(a==0)
			break;
		else
			sum=sum+a;
	}
	printf("%d",sum);
}
		