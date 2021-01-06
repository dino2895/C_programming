#include<stdio.h>
int main(){
	int a=0,b=0,flag=0;
	scanf("%d",&a);
	while(a!=0){
		flag++;
		b=b+flag;
		printf("%d\n",b);
		a--;
	}
}