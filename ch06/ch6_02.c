#include<stdio.h>
int main(){
	int n=1, sum=0;
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	while(n != 0){
		scanf("%d", &n);
		sum = sum+n;
	}	
	printf("The sum is: %d\n",sum);
}