#include<stdio.h>
#include<math.h>
int main(){
	float x,y;
	//3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
	scanf("%f", &x);
	y = 3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
	printf ("%.0f", y);
}