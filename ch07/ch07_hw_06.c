#include<stdio.h>
int main(){
	float a=0,b=0,c=0,z=0;
	char x,y;
	printf("Enter an expression (example: 1+2.5*3):  ");
	scanf("%f %c %f %c %f",&a,&x,&b,&y,&c);
	if(x=='+')
		z = a+b;
	else if(x=='-')
		z = a-b;
	else if(x=='*')
		z = a*b;
	else if(x=='/')
		z = a/b;
	if(y=='+')
		z = z+c;
	else if(y=='-')
		z = z-c;
	else if(y=='*')
		z = z*c;
	else if(y=='/')
		z = z/c;
	printf("Value of expression: %.1f",z);
}