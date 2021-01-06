#include<stdio.h>
int main(){
	int big=0,i;
	scanf("%d",&i);
	while(i!=0){
		if(i>big){
			big = i;
			printf("%d\n",big);
		}
		else
			printf("%d\n",big);
		scanf("%d",&i);
	}
	if(i==0){
		printf("%d",big);
	}
}