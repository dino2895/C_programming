#include<stdio.h>
int main(){
	int i,a1,a2,a3,a4,a5;
	printf("Enter a number between 0 and 32767:");
	scanf("%5d",&i);
	a5=i%8;
	a4=i/8%8;
	a3=i/8/8%8;
	a2=i/8/8/8%8;
	a1=i/8/8/8/8%8;
	printf("In octal, your number is:%1d%1d%1d%1d%1d",a1,a2,a3,a4,a5);
}
	