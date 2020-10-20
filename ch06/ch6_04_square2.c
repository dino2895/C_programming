#include<stdio.h>
int main(){
	int i ,n;
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: \n");
	scanf("%d", &n);
	i = 1;
	while (i<=n){
		printf("%10d%10d", i,i*i);
		i++;
		if (i<=n)
			printf("\n");
	}
}