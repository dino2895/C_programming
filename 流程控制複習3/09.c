#include<stdio.h>
int main(){
	for (int i=9;i>0;i--){
		for (int j=9;j>9-i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}