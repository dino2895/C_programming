#include<stdio.h>
int main(){
	int x=0,y=0,z=0;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if (x+y>z&&y+z>x&&x+z>y)
		printf("Y");
	else
		printf("N");
}