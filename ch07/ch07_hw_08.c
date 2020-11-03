#include<stdio.h>
#include<math.h>
int main(){
	double x;
	printf("Enter a positive number: ");
	scanf("%lf",&x);
	x = sqrt(x);
	printf("Square root: %.5lf",x);
}
	