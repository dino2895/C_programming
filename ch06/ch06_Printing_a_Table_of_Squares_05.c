#include<stdio.h>
int main(){
	int i ,n;
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	i = 1;
	while (i<=n){
		printf("%10d%10d%10d\n", i,i*2,i*3);
		i++;
	}
}
	
	