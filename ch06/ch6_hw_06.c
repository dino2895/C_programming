#include<stdio.h>
int main(){
	int m,n,r,o,p;
	printf("Enter a fraction (x/y): ");
	scanf("%d/%d",&m,&n);
	o = m;
	p = n;
	while(n!=0){
		r = m%n;
		m = n;
		n = r;
	}
	printf("GCD = %d\n",m);
	printf("In lowest terms: %d/%d",o/m,p/m);
}