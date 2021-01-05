#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	if (n>=90)
		printf("A");
	else if(n<90&&n>=80)
		printf("B");
	else if(n<80&&n>=70)
		printf("C");
	else if(n<70&&n>=60)
		printf("D");
	else 
		printf("F");
}