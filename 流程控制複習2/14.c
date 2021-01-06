#include<stdio.h>
int main(){
	int input=0,flag=0;
	do{
		scanf("%d",&input);
		if(input/100000==1){
			if (input/1000%100==7){
				flag++;
				continue;
			}
			else
				printf("N\n");
		}
		else
			printf("N\n");
	}while(flag!=3);
}