#include<stdio.h>
int main(){
	int a=0,i=0;
	printf("Enter a nonnegative integer: ");
	scanf("%d",&a);
	a *= 10;
	do {
		a=a/10;
		i= i+1;
	}while (a>10);
	printf("The number has %d digit(s).",i);
}