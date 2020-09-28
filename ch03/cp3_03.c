#include<stdio.h>
int main(){
	int y ,d ,m;
	printf("Enter a date (mm/dd/yyyy):");
	scanf("%d/%d/%d" , &m ,&d ,&y);
	printf("%4d%02d%02d", y ,m ,d);
}