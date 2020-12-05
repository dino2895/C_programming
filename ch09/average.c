#include<stdio.h>

double average(double a,double b){
	return (a+b)/2;
}
int main(){
	double x,y,z;
	printf("Enter threee numbers: ");
	scanf("%lf%lf%lf", &x,&y,&z);
	printf("Average of %g and %g: %g\n",x,y,average(x,y));
	printf("Average of %g and %g: %g\n",y,z,average(y,z));
	printf("Average of %g and %g: %g\n",x,z,average(x,z));
}