#include<stdio.h>
int main(){
	int lucky=0,guess=0;
	scanf("%d",&lucky);
	do{
		scanf("%d",&guess);
		if(guess>lucky){
			printf("smaller\n");
		}
		else if(guess<lucky){
			printf("bigger\n");
		}
		else if(guess==lucky){
			printf("bingo");
		}
	}while(guess!=lucky);
}