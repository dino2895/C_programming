#include<stdio.h>
int main(){
	int n1 ,d1 ,n2 ,d2 ,n3 ,d3;
	printf("Enter two fractions separated by a plus sign:");
	scanf("%d/%d+%d/%d", &n1, &d1, &n2, &d2);
	n3=n1*d2+n2*d1;
	d3=d1*d2;
	printf("The sum is ");
	printf("%d/%d", n3 ,d3);
}