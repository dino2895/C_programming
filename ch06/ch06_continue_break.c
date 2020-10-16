#include<stdio.h>
int main(){
	int i,j=0;
	for(;;){
		scanf("%d",&i);
		if(i<0)
			continue;
		else if(i>0)
			j+=i;
		else 
			break;
	}
	printf("%d",j);
}