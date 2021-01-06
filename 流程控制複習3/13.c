#include<stdio.h>
int main(){
	int a=0;
	scanf("%d",&a);
	for(int i=1;i<=100;i++){
		if(i%a==0)
			continue;
		printf("%d\n",i);
	}
}