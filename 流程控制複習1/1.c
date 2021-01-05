#include<stdio.h>
int main(){
	int a=0;
	scanf("%d",&a);
	if (a>100){
		a=a-100;
		printf("%d",a);
	}
	else{
		printf("%d",a);
	}
}
