#include<stdio.h>
int main(){
	int i=1,j=0;
	while(i<11){
		j = i+j;
		i++;
	}
	printf("%d",j);
}