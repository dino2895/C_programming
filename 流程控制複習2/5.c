#include<stdio.h>
int main(){
	int a=10,sum=0;
	while(a!=0){
		sum+=a;
		a--;
	}
	printf("%d",sum);	
}