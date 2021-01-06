#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a){
		case 5:
			printf("*****\n");
		case 4:
			printf("****\n");
		case 3:
			printf("***\n");
		case 2:
			printf("**\n");
		case 1:
			printf("*\n");
	}
}