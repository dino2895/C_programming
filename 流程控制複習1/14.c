#include<stdio.h>
#include<ctype.h>
int main(){
	char n;
	scanf("%c",&n);
	n = toupper(n);
	if (n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
		printf("v");
	else
		printf("c");
}