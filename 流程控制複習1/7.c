#include<stdio.h>
#include<math.h>
int main(){
	char k;
	scanf("%c",&k);
	if(k=='t'){
		int a=0,b=0;
		scanf("%d",&a);
		scanf("%d",&b);
		printf("%d",a*b/2);
	}
	else{
		float c=0;
		scanf("%f",&c);
		printf("%.f",floor(c*c*3.14));
	}
}