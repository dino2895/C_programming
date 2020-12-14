#include<stdio.h>
float average(int a,int b,int c);
int main(){
	int a ,b ,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%.2f",average(a,b,c));
}
float average(int a,int b,int c){
	float avg = (a+b+c)/3;
	return avg;
}