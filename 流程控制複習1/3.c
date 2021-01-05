#include<stdio.h>
int main(){
	int a=0,b=0;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		printf("%d\n",a);
		printf("%d",b);
	}
	else{
		printf("%d\n",b);
		printf("%d",a);
	}
}
