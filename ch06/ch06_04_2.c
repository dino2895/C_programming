#include<stdio.h>
int main(){
	int i, j=0;
	printf("Enter a nonnegative integer: ");
	scanf("%d",&i);
	do{
		j = j+i%10;
		i = i/10;
	}
	while(i>0);
	printf("%d",j);
}