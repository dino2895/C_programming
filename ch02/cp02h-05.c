#include<stdio.h>
int main(){
	float input1 ,input2 ,input3,o1,o2,o3;
	scanf ("%f", &input1);
	scanf ("%f", &input2);
	scanf ("%f", &input3);
	input2=input2*0.01;
	o1 = input1-input3+input1*input2/12;
	o2 = o1*input2/12+o1-input3;
	o3 = o2*input2/12+o2-input3;
	printf("$");
	printf ("%.2f\n",o1);
	printf("$");
	printf ("%.2f\n",o2);
	printf("$");
	printf ("%.2f",o3);
}