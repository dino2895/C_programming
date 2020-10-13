#include<stdio.h>
int main(){
	int i=1,j=0,k;
	scanf("%d",&k);
	while(i<k+1){
		j = i+j;
		i++;
	}
	printf("%d",j);
}