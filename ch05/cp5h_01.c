#include<stdio.h>
int main(){
	int a,b, count=0;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = a;
	if(1 <= a && a <= 9999){
		while(a !=0){
			a = a/10;
			++count;
		}
		if(count == 1)
			printf("The number %d has %d digit", b, count);
		else
			printf("The number %d has %d digits", b, count);
	}else
		printf("Please enter the whole between 1 and 9999");
}