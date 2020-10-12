#include<stdio.h>
int main(){
	float commission, value;
	printf("Enter value of trade: ");
	scanf("%f", &value);
	
	if (value < 2000.00f)
		commission = 50.00f + .02f * value;
	else if (value < 6000.00f)
		commission = 80.00f + .015f * value;
	else if (value < 20000.00f)
		commission = 110.00f + .01f * value;
	else if (value < 55000.00f)
		commission = 180.00f + .005f * value;
	else if (value < 1000000.00f)
		commission = 200.00f + .0015f * value;
	else 
		commission = 250.00f + .0009f * value;
	
	if (commission < 70.00f)
		commission = 70.00f;
	
	printf ("Commission: $%.2f", commission);
}