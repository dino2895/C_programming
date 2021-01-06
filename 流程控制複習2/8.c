#include<stdio.h>
int main(){
	int a=0,b=0,flag=1;
	scanf("%d",&a);
	while(b<100){
		b=b+a;
		if(b<100)
			printf("%d\n",b);
		else if(b>=100)
			break;
		scanf("%d",&a);
		flag++;
	}
	printf("over, %d times.",flag);
}