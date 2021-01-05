#include<stdio.h>
int main(){
	int a=0;
	scanf("%d",&a); 	
	while(a!=-1){
		printf("%c\n",a);
		scanf("%d",&a);
	}
}