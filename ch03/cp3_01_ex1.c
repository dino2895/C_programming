#include<stdio.h>
int main(){
	int i=40;
	float x=839.21f;
	
	printf("|%d|%5d|%-5d|%5.3d|\n" , i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|", x ,x ,x);
}