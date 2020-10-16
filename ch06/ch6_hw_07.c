#include<stdio.h>
#include<math.h>
int main(){
	int i;
	scanf("%d",&i);
	i = sqrt(i);
	for(int j=2;j<=i;j+=2){
		printf("%d\n",j*j);
	}
}