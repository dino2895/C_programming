#include<stdio.h>
int main(){
	int input,a=20,b=10,c=5,d=1,o1,o2,o3,o4;
	scanf("%d",&input);
	o1=input/a;
	o2=input%a/b;
	o3=input%a%b/c;
	o4=input%a%b%c/d;
	printf("%d %d %d %d",o1,o2,o3,o4);
}