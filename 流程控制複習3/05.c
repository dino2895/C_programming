#include<stdio.h>
int main(){
	int sum=0;
	for(int i=0;i<200;i+=3){
		sum=sum+i;
	}
	printf("%d\n",sum);
}