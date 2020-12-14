#include<stdio.h>
int bigger(int a,int b);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",bigger(a,b));
}
int bigger(int a,int b){
	if (a>b)
		return a;
	else 
		return b;
}
		